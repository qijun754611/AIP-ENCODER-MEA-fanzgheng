const float window_f[512] = 
{
	0.000038f,
	0.000150f,
	0.000337f,
	0.000600f,
	0.000937f,
	0.001349f,
	0.001837f,
	0.002398f,
	0.003035f,
	0.003746f,
	0.004531f,
	0.005391f,
	0.006325f,
	0.007333f,
	0.008414f,
	0.009570f,
	0.010799f,
	0.012102f,
	0.013478f,
	0.014926f,
	0.016448f,
	0.018042f,
	0.019708f,
	0.021447f,
	0.023257f,
	0.025138f,
	0.027091f,
	0.029115f,
	0.031210f,
	0.033375f,
	0.035609f,
	0.037914f,
	0.040288f,
	0.042730f,
	0.045242f,
	0.047821f,
	0.050469f,
	0.053184f,
	0.055966f,
	0.058814f,
	0.061729f,
	0.064709f,
	0.067755f,
	0.070865f,
	0.074040f,
	0.077279f,
	0.080581f,
	0.083947f,
	0.087374f,
	0.090864f,
	0.094414f,
	0.098026f,
	0.101698f,
	0.105430f,
	0.109221f,
	0.113070f,
	0.116978f,
	0.120943f,
	0.124965f,
	0.129043f,
	0.133177f,
	0.137366f,
	0.141609f,
	0.145906f,
	0.150256f,
	0.154658f,
	0.159113f,
	0.163618f,
	0.168174f,
	0.172780f,
	0.177435f,
	0.182138f,
	0.186889f,
	0.191687f,
	0.196531f,
	0.201421f,
	0.206355f,
	0.211334f,
	0.216355f,
	0.221420f,
	0.226526f,
	0.231673f,
	0.236860f,
	0.242087f,
	0.247353f,
	0.252656f,
	0.257997f,
	0.263374f,
	0.268786f,
	0.274233f,
	0.279714f,
	0.285228f,
	0.290774f,
	0.296352f,
	0.301960f,
	0.307598f,
	0.313265f,
	0.318959f,
	0.324681f,
	0.330429f,
	0.336203f,
	0.342001f,
	0.347823f,
	0.353668f,
	0.359534f,
	0.365422f,
	0.371330f,
	0.377257f,
	0.383203f,
	0.389166f,
	0.395146f,
	0.401141f,
	0.407152f,
	0.413176f,
	0.419213f,
	0.425263f,
	0.431323f,
	0.437394f,
	0.443474f,
	0.449563f,
	0.455660f,
	0.461763f,
	0.467871f,
	0.473985f,
	0.480102f,
	0.486223f,
	0.492345f,
	0.498469f,
	0.504593f,
	0.510716f,
	0.516838f,
	0.522957f,
	0.529072f,
	0.535184f,
	0.541290f,
	0.547389f,
	0.553482f,
	0.559567f,
	0.565643f,
	0.571708f,
	0.577764f,
	0.583807f,
	0.589838f,
	0.595855f,
	0.601858f,
	0.607846f,
	0.613818f,
	0.619772f,
	0.625709f,
	0.631626f,
	0.637524f,
	0.643402f,
	0.649257f,
	0.655091f,
	0.660901f,
	0.666687f,
	0.672448f,
	0.678183f,
	0.683891f,
	0.689572f,
	0.695225f,
	0.700848f,
	0.706441f,
	0.712003f,
	0.717533f,
	0.723030f,
	0.728494f,
	0.733924f,
	0.739319f,
	0.744678f,
	0.750000f,
	0.755285f,
	0.760531f,
	0.765738f,
	0.770906f,
	0.776032f,
	0.781118f,
	0.786161f,
	0.791161f,
	0.796118f,
	0.801030f,
	0.805897f,
	0.810718f,
	0.815492f,
	0.820219f,
	0.824899f,
	0.829529f,
	0.834110f,
	0.838641f,
	0.843121f,
	0.847549f,
	0.851926f,
	0.856249f,
	0.860520f,
	0.864736f,
	0.868897f,
	0.873003f,
	0.877053f,
	0.881047f,
	0.884983f,
	0.888862f,
	0.892682f,
	0.896444f,
	0.900145f,
	0.903787f,
	0.907369f,
	0.910889f,
	0.914347f,
	0.917744f,
	0.921078f,
	0.924348f,
	0.927555f,
	0.930698f,
	0.933776f,
	0.936789f,
	0.939737f,
	0.942619f,
	0.945434f,
	0.948182f,
	0.950863f,
	0.953477f,
	0.956022f,
	0.958500f,
	0.960908f,
	0.963247f,
	0.965517f,
	0.967717f,
	0.969846f,
	0.971906f,
	0.973894f,
	0.975811f,
	0.977657f,
	0.979432f,
	0.981134f,
	0.982764f,
	0.984322f,
	0.985807f,
	0.987219f,
	0.988559f,
	0.989825f,
	0.991017f,
	0.992136f,
	0.993181f,
	0.994152f,
	0.995048f,
	0.995871f,
	0.996619f,
	0.997293f,
	0.997892f,
	0.998416f,
	0.998866f,
	0.999241f,
	0.999541f,
	0.999766f,
	0.999916f,
	0.999991f,
	0.999991f,
	0.999916f,
	0.999766f,
	0.999541f,
	0.999241f,
	0.998866f,
	0.998416f,
	0.997892f,
	0.997293f,
	0.996619f,
	0.995871f,
	0.995048f,
	0.994152f,
	0.993181f,
	0.992136f,
	0.991017f,
	0.989825f,
	0.988559f,
	0.987219f,
	0.985807f,
	0.984322f,
	0.982764f,
	0.981134f,
	0.979432f,
	0.977657f,
	0.975811f,
	0.973894f,
	0.971906f,
	0.969846f,
	0.967717f,
	0.965517f,
	0.963247f,
	0.960908f,
	0.958500f,
	0.956022f,
	0.953477f,
	0.950863f,
	0.948182f,
	0.945434f,
	0.942619f,
	0.939737f,
	0.936789f,
	0.933776f,
	0.930698f,
	0.927555f,
	0.924348f,
	0.921078f,
	0.917744f,
	0.914347f,
	0.910889f,
	0.907369f,
	0.903787f,
	0.900145f,
	0.896444f,
	0.892682f,
	0.888862f,
	0.884983f,
	0.881047f,
	0.877053f,
	0.873003f,
	0.868897f,
	0.864736f,
	0.860520f,
	0.856249f,
	0.851926f,
	0.847549f,
	0.843121f,
	0.838641f,
	0.834110f,
	0.829529f,
	0.824899f,
	0.820219f,
	0.815492f,
	0.810718f,
	0.805897f,
	0.801030f,
	0.796118f,
	0.791161f,
	0.786161f,
	0.781118f,
	0.776032f,
	0.770906f,
	0.765738f,
	0.760531f,
	0.755285f,
	0.750000f,
	0.744678f,
	0.739319f,
	0.733924f,
	0.728494f,
	0.723030f,
	0.717533f,
	0.712003f,
	0.706441f,
	0.700848f,
	0.695225f,
	0.689572f,
	0.683891f,
	0.678183f,
	0.672448f,
	0.666687f,
	0.660901f,
	0.655091f,
	0.649257f,
	0.643402f,
	0.637524f,
	0.631626f,
	0.625709f,
	0.619772f,
	0.613818f,
	0.607846f,
	0.601858f,
	0.595855f,
	0.589838f,
	0.583807f,
	0.577764f,
	0.571708f,
	0.565643f,
	0.559567f,
	0.553482f,
	0.547389f,
	0.541290f,
	0.535184f,
	0.529072f,
	0.522957f,
	0.516838f,
	0.510716f,
	0.504593f,
	0.498469f,
	0.492345f,
	0.486223f,
	0.480102f,
	0.473985f,
	0.467871f,
	0.461763f,
	0.455660f,
	0.449563f,
	0.443474f,
	0.437394f,
	0.431323f,
	0.425263f,
	0.419213f,
	0.413176f,
	0.407152f,
	0.401141f,
	0.395146f,
	0.389166f,
	0.383203f,
	0.377257f,
	0.371330f,
	0.365422f,
	0.359534f,
	0.353668f,
	0.347823f,
	0.342001f,
	0.336203f,
	0.330429f,
	0.324681f,
	0.318959f,
	0.313265f,
	0.307598f,
	0.301960f,
	0.296352f,
	0.290774f,
	0.285228f,
	0.279714f,
	0.274233f,
	0.268786f,
	0.263374f,
	0.257997f,
	0.252656f,
	0.247353f,
	0.242087f,
	0.236860f,
	0.231673f,
	0.226526f,
	0.221420f,
	0.216355f,
	0.211334f,
	0.206355f,
	0.201421f,
	0.196531f,
	0.191687f,
	0.186889f,
	0.182138f,
	0.177435f,
	0.172780f,
	0.168174f,
	0.163618f,
	0.159113f,
	0.154658f,
	0.150256f,
	0.145906f,
	0.141609f,
	0.137366f,
	0.133177f,
	0.129043f,
	0.124965f,
	0.120943f,
	0.116978f,
	0.113070f,
	0.109221f,
	0.105430f,
	0.101698f,
	0.098026f,
	0.094414f,
	0.090864f,
	0.087374f,
	0.083947f,
	0.080581f,
	0.077279f,
	0.074040f,
	0.070865f,
	0.067755f,
	0.064709f,
	0.061729f,
	0.058814f,
	0.055966f,
	0.053184f,
	0.050469f,
	0.047821f,
	0.045242f,
	0.042730f,
	0.040288f,
	0.037914f,
	0.035609f,
	0.033375f,
	0.031210f,
	0.029115f,
	0.027091f,
	0.025138f,
	0.023257f,
	0.021447f,
	0.019708f,
	0.018042f,
	0.016448f,
	0.014926f,
	0.013478f,
	0.012102f,
	0.010799f,
	0.009570f,
	0.008414f,
	0.007333f,
	0.006325f,
	0.005391f,
	0.004531f,
	0.003746f,
	0.003035f,
	0.002398f,
	0.001837f,
	0.001349f,
	0.000937f,
	0.000600f,
	0.000337f,
	0.000150f,
	0.000038f
};

const float sin_tbl_f[512] = 
{
	0.000000f,
	0.012272f,
	0.024541f,
	0.036807f,
	0.049068f,
	0.061321f,
	0.073565f,
	0.085797f,
	0.098017f,
	0.110222f,
	0.122411f,
	0.134581f,
	0.146730f,
	0.158858f,
	0.170962f,
	0.183040f,
	0.195090f,
	0.207111f,
	0.219101f,
	0.231058f,
	0.242980f,
	0.254866f,
	0.266713f,
	0.278520f,
	0.290285f,
	0.302006f,
	0.313682f,
	0.325310f,
	0.336890f,
	0.348419f,
	0.359895f,
	0.371317f,
	0.382683f,
	0.393992f,
	0.405241f,
	0.416430f,
	0.427555f,
	0.438616f,
	0.449611f,
	0.460539f,
	0.471397f,
	0.482184f,
	0.492898f,
	0.503538f,
	0.514103f,
	0.524590f,
	0.534998f,
	0.545325f,
	0.555570f,
	0.565732f,
	0.575808f,
	0.585798f,
	0.595699f,
	0.605511f,
	0.615232f,
	0.624859f,
	0.634393f,
	0.643832f,
	0.653173f,
	0.662416f,
	0.671559f,
	0.680601f,
	0.689541f,
	0.698376f,
	0.707107f,
	0.715731f,
	0.724247f,
	0.732654f,
	0.740951f,
	0.749136f,
	0.757209f,
	0.765167f,
	0.773010f,
	0.780737f,
	0.788346f,
	0.795837f,
	0.803208f,
	0.810457f,
	0.817585f,
	0.824589f,
	0.831470f,
	0.838225f,
	0.844854f,
	0.851355f,
	0.857729f,
	0.863973f,
	0.870087f,
	0.876070f,
	0.881921f,
	0.887640f,
	0.893224f,
	0.898674f,
	0.903989f,
	0.909168f,
	0.914210f,
	0.919114f,
	0.923880f,
	0.928506f,
	0.932993f,
	0.937339f,
	0.941544f,
	0.945607f,
	0.949528f,
	0.953306f,
	0.956940f,
	0.960431f,
	0.963776f,
	0.966976f,
	0.970031f,
	0.972940f,
	0.975702f,
	0.978317f,
	0.980785f,
	0.983105f,
	0.985278f,
	0.987301f,
	0.989177f,
	0.990903f,
	0.992480f,
	0.993907f,
	0.995185f,
	0.996313f,
	0.997290f,
	0.998118f,
	0.998795f,
	0.999322f,
	0.999699f,
	0.999925f,
	1.000000f,
	0.999925f,
	0.999699f,
	0.999322f,
	0.998795f,
	0.998118f,
	0.997290f,
	0.996313f,
	0.995185f,
	0.993907f,
	0.992480f,
	0.990903f,
	0.989177f,
	0.987301f,
	0.985278f,
	0.983105f,
	0.980785f,
	0.978317f,
	0.975702f,
	0.972940f,
	0.970031f,
	0.966976f,
	0.963776f,
	0.960431f,
	0.956940f,
	0.953306f,
	0.949528f,
	0.945607f,
	0.941544f,
	0.937339f,
	0.932993f,
	0.928506f,
	0.923880f,
	0.919114f,
	0.914210f,
	0.909168f,
	0.903989f,
	0.898674f,
	0.893224f,
	0.887640f,
	0.881921f,
	0.876070f,
	0.870087f,
	0.863973f,
	0.857729f,
	0.851355f,
	0.844854f,
	0.838225f,
	0.831470f,
	0.824589f,
	0.817585f,
	0.810457f,
	0.803208f,
	0.795837f,
	0.788346f,
	0.780737f,
	0.773010f,
	0.765167f,
	0.757209f,
	0.749136f,
	0.740951f,
	0.732654f,
	0.724247f,
	0.715731f,
	0.707107f,
	0.698376f,
	0.689541f,
	0.680601f,
	0.671559f,
	0.662416f,
	0.653173f,
	0.643832f,
	0.634393f,
	0.624859f,
	0.615232f,
	0.605511f,
	0.595699f,
	0.585798f,
	0.575808f,
	0.565732f,
	0.555570f,
	0.545325f,
	0.534998f,
	0.524590f,
	0.514103f,
	0.503538f,
	0.492898f,
	0.482184f,
	0.471397f,
	0.460539f,
	0.449611f,
	0.438616f,
	0.427555f,
	0.416430f,
	0.405241f,
	0.393992f,
	0.382683f,
	0.371317f,
	0.359895f,
	0.348419f,
	0.336890f,
	0.325310f,
	0.313682f,
	0.302006f,
	0.290285f,
	0.278520f,
	0.266713f,
	0.254866f,
	0.242980f,
	0.231058f,
	0.219101f,
	0.207111f,
	0.195090f,
	0.183040f,
	0.170962f,
	0.158858f,
	0.146730f,
	0.134581f,
	0.122411f,
	0.110222f,
	0.098017f,
	0.085797f,
	0.073565f,
	0.061321f,
	0.049068f,
	0.036807f,
	0.024541f,
	0.012272f,
	0.000000f,
	-0.012272f,
	-0.024541f,
	-0.036807f,
	-0.049068f,
	-0.061321f,
	-0.073565f,
	-0.085797f,
	-0.098017f,
	-0.110222f,
	-0.122411f,
	-0.134581f,
	-0.146730f,
	-0.158858f,
	-0.170962f,
	-0.183040f,
	-0.195090f,
	-0.207111f,
	-0.219101f,
	-0.231058f,
	-0.242980f,
	-0.254866f,
	-0.266713f,
	-0.278520f,
	-0.290285f,
	-0.302006f,
	-0.313682f,
	-0.325310f,
	-0.336890f,
	-0.348419f,
	-0.359895f,
	-0.371317f,
	-0.382683f,
	-0.393992f,
	-0.405241f,
	-0.416430f,
	-0.427555f,
	-0.438616f,
	-0.449611f,
	-0.460539f,
	-0.471397f,
	-0.482184f,
	-0.492898f,
	-0.503538f,
	-0.514103f,
	-0.524590f,
	-0.534998f,
	-0.545325f,
	-0.555570f,
	-0.565732f,
	-0.575808f,
	-0.585798f,
	-0.595699f,
	-0.605511f,
	-0.615232f,
	-0.624859f,
	-0.634393f,
	-0.643832f,
	-0.653173f,
	-0.662416f,
	-0.671559f,
	-0.680601f,
	-0.689541f,
	-0.698376f,
	-0.707107f,
	-0.715731f,
	-0.724247f,
	-0.732654f,
	-0.740951f,
	-0.749136f,
	-0.757209f,
	-0.765167f,
	-0.773010f,
	-0.780737f,
	-0.788346f,
	-0.795837f,
	-0.803208f,
	-0.810457f,
	-0.817585f,
	-0.824589f,
	-0.831470f,
	-0.838225f,
	-0.844854f,
	-0.851355f,
	-0.857729f,
	-0.863973f,
	-0.870087f,
	-0.876070f,
	-0.881921f,
	-0.887640f,
	-0.893224f,
	-0.898674f,
	-0.903989f,
	-0.909168f,
	-0.914210f,
	-0.919114f,
	-0.923880f,
	-0.928506f,
	-0.932993f,
	-0.937339f,
	-0.941544f,
	-0.945607f,
	-0.949528f,
	-0.953306f,
	-0.956940f,
	-0.960431f,
	-0.963776f,
	-0.966976f,
	-0.970031f,
	-0.972940f,
	-0.975702f,
	-0.978317f,
	-0.980785f,
	-0.983105f,
	-0.985278f,
	-0.987301f,
	-0.989177f,
	-0.990903f,
	-0.992480f,
	-0.993907f,
	-0.995185f,
	-0.996313f,
	-0.997290f,
	-0.998118f,
	-0.998795f,
	-0.999322f,
	-0.999699f,
	-0.999925f,
	-1.000000f,
	-0.999925f,
	-0.999699f,
	-0.999322f,
	-0.998795f,
	-0.998118f,
	-0.997290f,
	-0.996313f,
	-0.995185f,
	-0.993907f,
	-0.992480f,
	-0.990903f,
	-0.989177f,
	-0.987301f,
	-0.985278f,
	-0.983105f,
	-0.980785f,
	-0.978317f,
	-0.975702f,
	-0.972940f,
	-0.970031f,
	-0.966976f,
	-0.963776f,
	-0.960431f,
	-0.956940f,
	-0.953306f,
	-0.949528f,
	-0.945607f,
	-0.941544f,
	-0.937339f,
	-0.932993f,
	-0.928506f,
	-0.923880f,
	-0.919114f,
	-0.914210f,
	-0.909168f,
	-0.903989f,
	-0.898674f,
	-0.893224f,
	-0.887640f,
	-0.881921f,
	-0.876070f,
	-0.870087f,
	-0.863973f,
	-0.857729f,
	-0.851355f,
	-0.844854f,
	-0.838225f,
	-0.831470f,
	-0.824589f,
	-0.817585f,
	-0.810457f,
	-0.803208f,
	-0.795837f,
	-0.788346f,
	-0.780737f,
	-0.773010f,
	-0.765167f,
	-0.757209f,
	-0.749136f,
	-0.740951f,
	-0.732654f,
	-0.724247f,
	-0.715731f,
	-0.707107f,
	-0.698376f,
	-0.689541f,
	-0.680601f,
	-0.671559f,
	-0.662416f,
	-0.653173f,
	-0.643832f,
	-0.634393f,
	-0.624859f,
	-0.615232f,
	-0.605511f,
	-0.595699f,
	-0.585798f,
	-0.575808f,
	-0.565732f,
	-0.555570f,
	-0.545325f,
	-0.534998f,
	-0.524590f,
	-0.514103f,
	-0.503538f,
	-0.492898f,
	-0.482184f,
	-0.471397f,
	-0.460539f,
	-0.449611f,
	-0.438616f,
	-0.427555f,
	-0.416430f,
	-0.405241f,
	-0.393992f,
	-0.382683f,
	-0.371317f,
	-0.359895f,
	-0.348419f,
	-0.336890f,
	-0.325310f,
	-0.313682f,
	-0.302006f,
	-0.290285f,
	-0.278520f,
	-0.266713f,
	-0.254866f,
	-0.242980f,
	-0.231058f,
	-0.219101f,
	-0.207111f,
	-0.195090f,
	-0.183040f,
	-0.170962f,
	-0.158858f,
	-0.146730f,
	-0.134581f,
	-0.122411f,
	-0.110222f,
	-0.098017f,
	-0.085797f,
	-0.073565f,
	-0.061321f,
	-0.049068f,
	-0.036807f,
	-0.024541f,
	-0.012272f
};