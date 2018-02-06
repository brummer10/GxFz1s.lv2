// generated from file './/maestro_fz1s.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)


namespace maestro_fz1s {

struct table1d { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct table1d_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator table1d&() const { return *(table1d*)this; }
};

static table1d_imp<100> clip __rt_data = {
	0.0,0.394515179396,101.97,100, {
	0.0,0.00603015075129,0.0180904522522,0.0301507537469,0.0422110552265,0.0542713566722,
	0.0663316580417,0.0783919592408,0.0904522600592,0.102512560027,0.114572858094,
	0.126633151913,0.13869343624,0.15075369936,0.162813915089,0.174874024928,
	0.18693389817,0.198993242803,0.21105140661,0.223106933614,0.235156577432,
	0.247193118816,0.259200598174,0.271144190587,0.282950034925,0.294470641721,
	0.305445189377,0.315505844416,0.324302375812,0.331685149347,0.337749693783,
	0.34272268487,0.34684305184,0.350309449589,0.353272707062,0.355843964801,
	0.35810490171,0.360116111787,0.361923194669,0.363561013504,0.365056646443,
	0.366431442802,0.367702471426,0.368883554945,0.369986019104,0.371019243547,
	0.371991072367,0.372908124189,0.373776029317,0.374599613231,0.375383040109,
	0.37612992624,0.376843430486,0.377526327079,0.378181064683,0.37880981468,
	0.379414510938,0.379996882771,0.380558482439,0.381100708226,0.381624823916,
	0.382131975308,0.3826232043,0.38309946095,0.383561613855,0.384010459105,
	0.384446728066,0.38487109414,0.385284178678,0.385686556167,0.386078758778,
	0.386461280398,0.386834580178,0.387199085695,0.387555195759,0.387903282914,
	0.388243695683,0.38857676057,0.38890278387,0.389222053284,0.389534839388,
	0.389841396959,0.390141966168,0.390436773672,0.390726033604,0.39100994847,
	0.391288709974,0.391562499764,0.391831490126,0.392095844606,0.392355718592,
	0.392611259843,0.39286260898,0.393109899932,0.393353260356,0.393592812019,
	0.393828671151,0.394060948779,0.394289751025,0.394515179396
	}
};

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec1[2];
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec3[2];
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fRec4[2];
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fRec2[6];
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fRec5[5];
	double 	fConst62;
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fRec6[2];
	double 	fConst66;
	double 	fConst67;
	double 	fConst68;
	double 	fRec0[3];
	FAUSTFLOAT 	fslider3;
	FAUSTFLOAT	*fslider3_;
	double 	fRec7[2];
	double 	fConst69;

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static double symclip(double x);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "maestro_fz1s_amp";
	name = N_("Fz1s_amp");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<6; i++) fRec2[i] = 0;
	for (int i=0; i<5; i++) fRec5[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<3; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec7[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (4.31308994647642e-10 * fConst0);
	fConst2 = (7.43926041937031e-06 + (fConst0 * (fConst1 - 1.30346605654428e-07)));
	fConst3 = faustpower<2>(fConst0);
	fConst4 = (1.48785208387406e-05 - (8.62617989295285e-10 * fConst3));
	fConst5 = (7.43926041937031e-06 + (fConst0 * (1.30346605654428e-07 + fConst1)));
	fConst6 = (1.0 / fConst5);
	fConst7 = (1.42250086374065e-23 * fConst0);
	fConst8 = ((fConst0 * ((fConst0 * (0 - (2.90674997009545e-20 + fConst7))) - 1.44657691448234e-17)) - 4.31635824339773e-29);
	fConst9 = (1.41282785786722e-23 * fConst0);
	fConst10 = (1.20548076206866e-15 + (fConst0 * (1.67896935563848e-17 + (fConst0 * (3.00552580894386e-20 + fConst9)))));
	fConst11 = (9.67300587343643e-26 * fConst0);
	fConst12 = (2.00913460344777e-13 + (fConst0 * (2.8937712655024e-15 + (fConst0 * (6.24355329580119e-18 + (fConst0 * (7.3665891842648e-21 + fConst11)))))));
	fConst13 = ((fConst0 * (1.44657691448234e-17 + (fConst0 * (fConst7 - 2.90674997009545e-20)))) - 4.31635824339773e-29);
	fConst14 = (1.20548076206866e-15 + (fConst0 * ((fConst0 * (3.00552580894386e-20 - fConst9)) - 1.67896935563848e-17)));
	fConst15 = ((fConst0 * (2.8937712655024e-15 + (fConst0 * ((fConst0 * (7.3665891842648e-21 - fConst11)) - 6.24355329580119e-18)))) - 2.00913460344777e-13);
	fConst16 = (7.11250431870326e-23 * fConst0);
	fConst17 = ((fConst0 * ((fConst0 * (8.72024991028635e-20 - fConst16)) - 1.44657691448234e-17)) - 4.31635824339773e-29);
	fConst18 = (7.06413928933608e-23 * fConst0);
	fConst19 = (1.20548076206866e-15 + (fConst0 * (1.67896935563848e-17 + (fConst0 * (fConst18 - 9.01657742683157e-20)))));
	fConst20 = (4.83650293671822e-25 * fConst0);
	fConst21 = ((fConst0 * (2.8937712655024e-15 + (fConst0 * (6.24355329580119e-18 + (fConst0 * (fConst20 - 2.20997675527944e-20)))))) - 6.0274038103433e-13);
	fConst22 = (1.42250086374065e-22 * fConst0);
	fConst23 = (8.63271648679547e-29 + (fConst0 * ((fConst0 * (fConst22 - 5.8134999401909e-20)) - 2.89315382896468e-17)));
	fConst24 = (1.41282785786722e-22 * fConst0);
	fConst25 = ((fConst0 * (3.35793871127696e-17 + (fConst0 * (6.01105161788771e-20 - fConst24)))) - 2.41096152413732e-15);
	fConst26 = (9.67300587343643e-25 * fConst0);
	fConst27 = ((fConst0 * ((fConst0 * (1.24871065916024e-17 + (fConst0 * (1.47331783685296e-20 - fConst26)))) - 5.7875425310048e-15)) - 4.01826920689553e-13);
	fConst28 = (8.63271648679547e-29 + (fConst0 * (2.89315382896468e-17 + (fConst0 * (0 - (5.8134999401909e-20 + fConst22))))));
	fConst29 = ((fConst0 * ((fConst0 * (6.01105161788771e-20 + fConst24)) - 3.35793871127696e-17)) - 2.41096152413732e-15);
	fConst30 = (4.01826920689553e-13 + (fConst0 * ((fConst0 * ((fConst0 * (1.47331783685296e-20 + fConst26)) - 1.24871065916024e-17)) - 5.7875425310048e-15)));
	fConst31 = ((fConst0 * (1.44657691448234e-17 + (fConst0 * (8.72024991028635e-20 + fConst16)))) - 4.31635824339773e-29);
	fConst32 = (1.20548076206866e-15 + (fConst0 * ((fConst0 * (0 - (9.01657742683157e-20 + fConst18))) - 1.67896935563848e-17)));
	fConst33 = (6.0274038103433e-13 + (fConst0 * (2.8937712655024e-15 + (fConst0 * ((fConst0 * (0 - (2.20997675527944e-20 + fConst20))) - 6.24355329580119e-18)))));
	fConst34 = (2.07655798087274e-05 * fConst0);
	fConst35 = (0.00325216918108672 + fConst34);
	fConst36 = ((0.00325216918108672 - fConst34) / fConst35);
	fConst37 = (2.05317498643971e-05 * fConst0);
	fConst38 = (0 - fConst37);
	fConst39 = (1.0 / fConst35);
	fConst40 = faustpower<4>(fConst0);
	fConst41 = (6.82800414581679e-19 * fConst0);
	fConst42 = ((fConst0 * (0 - (1.39523998632025e-15 + fConst41))) - 6.9435691931997e-13);
	fConst43 = (6.78157371762524e-19 * fConst0);
	fConst44 = (8.05905291128615e-13 + (fConst0 * (1.44265238896174e-15 + fConst43)));
	fConst45 = (4.64304281915542e-21 * fConst0);
	fConst46 = (1.38901020815463e-10 + (fConst0 * (2.99690558313297e-13 + (fConst0 * (3.53596280842325e-16 + fConst45)))));
	fConst47 = ((fConst0 * (1.39523998632025e-15 - fConst41)) - 6.9435691931997e-13);
	fConst48 = (8.05905291128615e-13 + (fConst0 * (fConst43 - 1.44265238896174e-15)));
	fConst49 = ((fConst0 * (2.99690558313297e-13 + (fConst0 * (fConst45 - 3.53596280842325e-16)))) - 1.38901020815463e-10);
	fConst50 = (2.73120165832672e-18 * fConst0);
	fConst51 = (fConst50 - 2.7904799726405e-15);
	fConst52 = (2.71262948705009e-18 * fConst0);
	fConst53 = (2.88530477792349e-15 - fConst52);
	fConst54 = (1.85721712766217e-20 * fConst0);
	fConst55 = ((fConst3 * (7.07192561684649e-16 - fConst54)) - 2.77802041630927e-10);
	fConst56 = (2.7904799726405e-15 + fConst50);
	fConst57 = (0 - (2.88530477792349e-15 + fConst52));
	fConst58 = (2.77802041630927e-10 + (fConst3 * (0 - (7.07192561684649e-16 + fConst54))));
	fConst59 = (1.38871383863994e-12 - (4.09680248749007e-18 * fConst3));
	fConst60 = ((4.06894423057514e-18 * fConst3) - 1.61181058225723e-12);
	fConst61 = ((2.78582569149325e-20 * fConst3) - 5.99381116626594e-13);
	fConst62 = faustpower<3>(fConst0);
	fConst63 = (1.70371720116618e-05 * fConst0);
	fConst64 = (0.182215743440233 + fConst63);
	fConst65 = ((0.182215743440233 - fConst63) / fConst64);
	fConst66 = (0.0569424198250729 - fConst63);
	fConst67 = (0.0569424198250729 + fConst63);
	fConst68 = (1.0 / fConst64);
	fConst69 = (fConst3 / fConst5);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

double always_inline Dsp::symclip(double x) {
    double f = fabs(x);
    f = f * clip.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = clip.data[0];
    } else if (i >= clip.size-1) {
        f = clip.data[clip.size-1];
    } else {
	f -= i;
	f = clip.data[i]*(1-f) + clip.data[i+1]*f;
    }
    return copysign(f, x);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
#define fslider3 (*fslider3_)
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	int 	iSlow2 = int(double(fslider2));
	double 	fSlow3 = (4.748558434412966e-05 * (exp((5 * double(fslider3))) - 1));
	for (int i=0; i<count; i++) {
		fRec1[0] = (fSlow0 + (0.993 * fRec1[1]));
		double fTemp0 = (5.99494200471907e-25 + (fConst0 * (fConst12 + (fRec1[0] * (3.59696520283144e-27 + (fConst0 * (fConst10 + (fConst8 * fRec1[0]))))))));
		fRec3[0] = (fSlow1 + (0.993 * fRec3[1]));
		fRec4[0] = ((double)input0[i] - (fConst36 * fRec4[1]));
		double fTemp1 = ((fConst38 * fRec4[1]) + (fConst37 * fRec4[0]));
		double fTemp2 = (fConst39 * (fTemp1 * fRec3[0]));
		fRec2[0] = (fTemp2 - ((((((fRec2[1] * (2.99747100235954e-24 + (fConst0 * (fConst33 + (fRec1[0] * (1.07908956084943e-26 + (fConst0 * (fConst32 + (fConst31 * fRec1[0]))))))))) + (fRec2[2] * (5.99494200471907e-24 + (fConst0 * (fConst30 + (fRec1[0] * (7.19393040566289e-27 + (fConst0 * (fConst29 + (fConst28 * fRec1[0])))))))))) + (fRec2[3] * (5.99494200471907e-24 + (fConst0 * (fConst27 + (fRec1[0] * ((fConst0 * (fConst25 + (fConst23 * fRec1[0]))) - 7.19393040566289e-27))))))) + (fRec2[4] * (2.99747100235954e-24 + (fConst0 * (fConst21 + (fRec1[0] * ((fConst0 * (fConst19 + (fConst17 * fRec1[0]))) - 1.07908956084943e-26))))))) + (fRec2[5] * (5.99494200471907e-25 + (fConst0 * (fConst15 + (fRec1[0] * ((fConst0 * (fConst14 + (fConst13 * fRec1[0]))) - 3.59696520283144e-27))))))) / fTemp0));
		double fTemp3 = (9.64384610166625e-09 + (fConst0 * (fConst46 + (fRec1[0] * (5.78630766099975e-11 + (fConst0 * (fConst44 + (fConst42 * fRec1[0]))))))));
		double fTemp4 = (3.65236609304525e-17 + (5.37112660741948e-15 * fRec1[0]));
		fRec5[0] = (fTemp2 - (((((fRec5[2] * (5.78630766099975e-08 + (fConst3 * (fConst61 + (fRec1[0] * (fConst60 + (fConst59 * fRec1[0]))))))) + (fRec5[1] * (3.8575384406665e-08 + (fConst0 * (fConst58 + (fRec1[0] * (1.15726153219995e-10 + (fConst3 * (fConst57 + (fConst56 * fRec1[0])))))))))) + (fRec5[3] * (3.8575384406665e-08 + (fConst0 * (fConst55 + (fRec1[0] * ((fConst3 * (fConst53 + (fConst51 * fRec1[0]))) - 1.15726153219995e-10))))))) + (fRec5[4] * (9.64384610166625e-09 + (fConst0 * (fConst49 + (fRec1[0] * ((fConst0 * (fConst48 + (fConst47 * fRec1[0]))) - 5.78630766099975e-11))))))) / fTemp3));
		double fTemp5 = (7.3047321860905e-17 + (1.0742253214839e-14 * fRec1[0]));
		double fTemp6 = symclip(max(-1.12, min(1.2, ((iSlow2)?(fConst62 * ((((fRec5[1] * (0 - fTemp5)) + ((fRec5[0] * fTemp4) + (fRec5[3] * fTemp5))) + (fRec5[4] * (0 - fTemp4))) / fTemp3)):(fConst40 * ((((7.60909602326433e-22 + (1.11898470930358e-19 * fRec1[0])) * (fRec2[5] + fRec2[0])) + (((1.52181920465287e-21 + (2.23796941860716e-19 * fRec1[0])) * (fRec2[2] + fRec2[3])) + ((0 - (2.2827288069793e-21 + (3.35695412791073e-19 * fRec1[0]))) * (fRec2[1] + fRec2[4])))) / fTemp0))))));
		double fTemp7 = ((int((fTemp6 < -0.72)))?(fTemp6 + (1.25 * faustpower<2>((0.72 + fTemp6)))):fTemp6);
		double fTemp8 = ((int((fTemp7 > 0.8)))?(fTemp7 - (1.25 * faustpower<2>((fTemp7 - 0.8)))):fTemp7);
		fRec6[0] = (fTemp8 - (fConst65 * fRec6[1]));
		fRec0[0] = (((fConst39 * (fTemp1 * (1 - fRec3[0]))) + ((iSlow2)?(fConst68 * ((fConst67 * fRec6[0]) + (fConst66 * fRec6[1]))):fTemp8)) - (fConst6 * ((fConst4 * fRec0[1]) + (fConst2 * fRec0[2]))));
		fRec7[0] = (fSlow3 + (0.993 * fRec7[1]));
		output0[i] = (FAUSTFLOAT)(fConst69 * ((3.80594624505966e-09 * (fRec0[1] * fRec7[0])) + ((0 - (1.90297312252983e-09 * fRec7[0])) * (fRec0[2] + fRec0[0]))));
		// post processing
		fRec7[1] = fRec7[0];
		fRec0[2] = fRec0[1]; fRec0[1] = fRec0[0];
		fRec6[1] = fRec6[0];
		for (int i=4; i>0; i--) fRec5[i] = fRec5[i-1];
		for (int i=5; i>0; i--) fRec2[i] = fRec2[i-1];
		fRec4[1] = fRec4[0];
		fRec3[1] = fRec3[0];
		fRec1[1] = fRec1[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
#undef fslider3
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case BALANCE: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case FILTER: 
		fslider2_ = (float*)data; // , 0.0, 0.0, 1.0, 1.0 
		break;
	case SUSTAIN: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fslider3_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   BALANCE, 
   FILTER, 
   SUSTAIN, 
   VOLUME, 
} PortIndex;
*/

} // end namespace maestro_fz1s
