## train_open.csv文件
    site:按地区分类
    age： 患者年龄
    male/female: 患者性别
    NC/MCI/AD:标签，1为属于该类别，三种病症不能共存
    Label:label

    Resolution:分辨率
    Noise:噪声(分辨率)
    Bias:偏差(分辨率)
    IQR：中位数(分辨率)
    以上四个应该和图片质量相关，结构磁共振（structural Magnetic Resonance Imaging, sMRI）扫描出图片分辨率服从一定均值，扫描过程有噪声，扫描结果存在偏差，方差，中位数。

    WMV:全脑体积
    GMV:灰质层体积
    Thickness:平均厚度
    Thickness_std:厚度方差

    TIV:颅内总体积
    CSF:脑脊液体积

## train data
    dim:28169
    包含从2600位被试中基于若干脑图谱提取出的灰质体积 (Grey Matter Volume, GMV)和平均皮层厚度 (Cortical Thickness, CT)。

### data_explain
    train data文件夹中每个患者的数据由若干脑图谱共同组成。
    0~13924 描述平均皮层厚度;
    13924~28168 描述灰质体积；
    不同脑谱图开始dim和截止dim在data_explain中已标出

### grey_matter_sorted_1mm(按灰质元素排序单位为1mm?)
    以AAL为例介绍
    AAL中包括三个文件，.csv文件，.nii文件和.png文件，.gii文件。

    AAL文件来源如下：
    An automated anatomical parcellation of the spatially normalized single-subject high-resolution T1 volume provided by the Montreal Neurological Institute (MNI) and an alternative parcellation of the orbitofrontal cortex (AAL2), the anterior cingulate, the thalamus, with the addition of some brain nuclei (AAL3).
    （MNI实验室提供的数据集，数据集得到类型相同但区域范围不同）

    .csv提供了不同Regin代表的区域的灰度体积，Regin数量与data_explain给出一致。

    .nii文件介绍：医用图像信息文件,可用python打开，代码见最后。

    .gii GII文件是一个GIfTI数据。GIfTI是神经成像信息学技术倡议(NIfTI)下的几何格式。但没有找到打开的代码。

    平均厚度只给出了图像并没有给出,csv文件

### 图谱_finaluse
    标出了数据集的来源


### 打开.nii图片代码
    from nibabel.viewers import OrthoSlicer3D
    from nibabel import nifti1
    import nibabel as nib
    from matplotlib import pylab as plt
    import matplotlib

    example_filename = 'AAL.nii'

    img = nib.load(example_filename)

    print(img)
    print(img.dataobj.shape)

    #shape不一定只有三个参数，打印出来看一下
    width, height, queue = img.dataobj.shape

    OrthoSlicer3D(img.dataobj).show()

    x = int((queue/10) ** 0.5) + 1
    num = 1
    for i in range(0, queue, 10): 
        img_arr = img.dataobj[:, :, i]
        plt.subplot(x, x, num)
        plt.imshow(img_arr, cmap='gray')
        num += 1
    plt.show()