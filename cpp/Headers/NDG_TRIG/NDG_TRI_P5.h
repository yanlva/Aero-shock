#ifndef NDG_TRI_P5
#define NDG_TRI_P5

int p = 5;

double r[21] = {-1,-0.765055323929,-0.285231516481,0.285231516481,0.765055323929,1,-1,-0.684472514502,-0.171245477332,0.368945029004,0.765055323929,-1,-0.657509045336,-0.171245477332,0.285231516481,-1,-0.684472514502,-0.285231516481,-1,-0.765055323929,-1};

double s[21] = {-1,-1,-1,-1,-1,-1,-0.765055323929,-0.684472514502,-0.657509045336,-0.684472514502,-0.765055323929,-0.285231516481,-0.171245477332,-0.171245477332,-0.285231516481,0.285231516481,0.368945029004,0.285231516481,0.765055323929,0.765055323929,1};

double Dr[21][21] = {{-7.5,10.1414159363,-4.03618727031,2.24468464818,-1.34991331419,0.5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{-1.78636494834,0,2.52342677743,-1.15282815854,0.65354750743,-0.237781177984,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0.484951047854,-1.72125695283,0,1.75296196637,-0.786356672223,0.269700610832,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{-0.269700610832,0.786356672223,-1.75296196637,0,1.72125695283,-0.484951047854,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0.237781177984,-0.65354750743,1.15282815854,-2.52342677743,0,1.78636494834,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{-0.5,1.34991331419,-2.24468464818,4.03618727031,-10.1414159363,7.5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{-1.31193471934,3.35524308124,-2.81956905229,2.31633105499,-1.78495264282,0.768318988201,-5.02357963429,7.27148591391,-3.04648157934,1.37274703027,-0.387969240417,-0.601443838017,-0.640823442424,0.363890592504,-0.149647079901,0.40834896637,0.134707653789,-0.0350196647368,-0.261539666759,-0.0311342691446,0.103021548205},
{0.451338221758,-0.776367156829,0.952341855567,-0.862589961997,0.722585148732,-0.330250139023,-1.16985455472,-0.366307226506,2.32929624652,-0.906531319323,0.252734601117,-0.275680427006,-0.116266218649,-0.116266218649,0.0719832071843,0.136986315638,0.0926329000395,-0.00615176758633,-0.103257063772,-0.0241718418122,0.0437953993201},
{-0.298013673845,0.606811511783,-0.669012914671,0.669012914671,-0.606811511783,0.298013673845,0.364158535631,-1.55239482148,0,1.55239482148,-0.364158535631,0.0760987600285,-0.108042471155,0.108042471155,-0.0760987600285,-0.00680301552174,0,0.00680301552174,0.00570721524847,-0.00570721524847,0},
{0.330250139023,-0.722585148732,0.862589961997,-0.952341855567,0.776367156829,-0.451338221758,-0.252734601117,0.906531319323,-2.32929624652,0.366307226506,1.16985455472,-0.0719832071843,0.116266218649,0.116266218649,0.275680427006,0.00615176758633,-0.0926329000395,-0.136986315638,0.0241718418122,0.103257063772,-0.0437953993201},
{-0.768318988201,1.78495264282,-2.31633105499,2.81956905229,-3.35524308124,1.31193471934,0.387969240417,-1.37274703027,3.04648157934,-7.27148591391,5.02357963429,0.149647079901,-0.363890592504,0.640823442424,0.601443838017,0.0350196647368,-0.134707653789,-0.40834896637,0.0311342691446,0.261539666759,-0.103021548205},
{0.673349594578,-0.650573632655,-0.591768104519,1.50714990853,-1.93102691707,1.08834005989,-1.81759387908,5.16613871168,-4.75453049884,3.33968228791,-1.24517561575,-4.67748362001,6.09145872659,-1.93790390145,0.248568340432,-0.360342927367,-0.728126915145,0.308937003435,0.321336256214,0.0679130293993,-0.118347906779},
{-0.353417672599,0.41075754748,-0.0796483452915,-0.33377750334,0.620642835556,-0.409875745095,0.720118201981,-1.47859131889,1.85582251555,-1.47859131889,0.614935620308,-0.990430384084,-0.435975562734,1.9638649867,-0.326974487819,-0.321417469413,0.0738035025946,-0.15574710532,0.113306690198,0.0465990118493,-0.0554039987542},
{0.409875745095,-0.620642835556,0.33377750334,0.0796483452915,-0.41075754748,0.353417672599,-0.614935620308,1.47859131889,-1.85582251555,1.47859131889,-0.720118201981,0.326974487819,-1.9638649867,0.435975562734,0.990430384084,0.15574710532,-0.0738035025946,0.321417469413,-0.0465990118493,-0.113306690198,0.0554039987542},
{-1.08834005989,1.93102691707,-1.50714990853,0.591768104519,0.650573632655,-0.673349594578,1.24517561575,-3.33968228791,4.75453049884,-5.16613871168,1.81759387908,-0.248568340432,1.93790390145,-6.09145872659,4.67748362001,-0.308937003435,0.728126915145,0.360342927367,-0.0679130293993,-0.321336256214,0.118347906779},
{-0.388048517612,0.0679130293993,0.308937003435,0.248568340432,-1.24517561575,1.08834005989,1.10769292844,-0.728126915145,-1.93790390145,3.33968228791,-1.93102691707,-2.11330489373,6.09145872659,-4.75453049884,1.50714990853,-4.67748362001,5.16613871168,-0.591768104519,-0.0963369262454,-0.650573632655,0.188398546724},
{0.374045538343,-0.276906442929,-0.0781349747706,0.0781349747706,0.276906442929,-0.374045538343,-0.825842212503,0.999164219362,0,-0.999164219362,0.825842212503,0.999576277635,-2.44556246517,2.44556246517,-0.999576277635,-1.22802228257,0,1.22802228257,-0.393487397896,0.393487397896,0},
{-1.08834005989,1.24517561575,-0.248568340432,-0.308937003435,-0.0679130293993,0.388048517612,1.93102691707,-3.33968228791,1.93790390145,0.728126915145,-1.10769292844,-1.50714990853,4.75453049884,-6.09145872659,2.11330489373,0.591768104519,-5.16613871168,4.67748362001,0.650573632655,0.0963369262454,-0.188398546724},
{0.340802726189,-0.0311342691446,-0.0350196647368,-0.149647079901,-0.387969240417,0.768318988201,-0.915087174189,0.134707653789,0.363890592504,1.37274703027,-1.78495264282,1.56117712491,-0.640823442424,-3.04648157934,2.31633105499,-3.12487061545,7.27148591391,-2.81956905229,-5.02357963429,3.35524308124,0.474430229004},
{-0.768318988201,0.387969240417,0.149647079901,0.0350196647368,0.0311342691446,-0.340802726189,1.78495264282,-1.37274703027,-0.363890592504,-0.134707653789,0.915087174189,-2.31633105499,3.04648157934,0.640823442424,-1.56117712491,2.81956905229,-7.27148591391,3.12487061545,-3.35524308124,5.02357963429,-0.474430229004},
{-0.5,0,0,0,0,0.5,1.34991331419,0,0,0,-1.34991331419,-2.24468464818,0,0,2.24468464818,4.03618727031,0,-4.03618727031,-10.1414159363,10.1414159363,0}};

double Ds[21][21] = {{-7.5,0,0,0,0,0,10.1414159363,0,0,0,0,-4.03618727031,0,0,0,2.24468464818,0,0,-1.34991331419,0,0.5},
{-1.31193471934,-5.02357963429,-0.601443838017,0.40834896637,-0.261539666759,0.103021548205,3.35524308124,7.27148591391,-0.640823442424,0.134707653789,-0.0311342691446,-2.81956905229,-3.04648157934,0.363890592504,-0.0350196647368,2.31633105499,1.37274703027,-0.149647079901,-1.78495264282,-0.387969240417,0.768318988201},
{0.673349594578,-1.81759387908,-4.67748362001,-0.360342927367,0.321336256214,-0.118347906779,-0.650573632655,5.16613871168,6.09145872659,-0.728126915145,0.0679130293993,-0.591768104519,-4.75453049884,-1.93790390145,0.308937003435,1.50714990853,3.33968228791,0.248568340432,-1.93102691707,-1.24517561575,1.08834005989},
{-0.388048517612,1.10769292844,-2.11330489373,-4.67748362001,-0.0963369262454,0.188398546724,0.0679130293993,-0.728126915145,6.09145872659,5.16613871168,-0.650573632655,0.308937003435,-1.93790390145,-4.75453049884,-0.591768104519,0.248568340432,3.33968228791,1.50714990853,-1.24517561575,-1.93102691707,1.08834005989},
{0.340802726189,-0.915087174189,1.56117712491,-3.12487061545,-5.02357963429,0.474430229004,-0.0311342691446,0.134707653789,-0.640823442424,7.27148591391,3.35524308124,-0.0350196647368,0.363890592504,-3.04648157934,-2.81956905229,-0.149647079901,1.37274703027,2.31633105499,-0.387969240417,-1.78495264282,0.768318988201},
{-0.5,1.34991331419,-2.24468464818,4.03618727031,-10.1414159363,0,0,0,0,0,10.1414159363,0,0,0,-4.03618727031,0,0,2.24468464818,0,-1.34991331419,0.5},
{-1.78636494834,0,0,0,0,0,0,0,0,0,0,2.52342677743,0,0,0,-1.15282815854,0,0,0.65354750743,0,-0.237781177984},
{0.451338221758,-1.16985455472,-0.275680427006,0.136986315638,-0.103257063772,0.0437953993201,-0.776367156829,-0.366307226506,-0.116266218649,0.0926329000395,-0.0241718418122,0.952341855567,2.32929624652,-0.116266218649,-0.00615176758633,-0.862589961997,-0.906531319323,0.0719832071843,0.722585148732,0.252734601117,-0.330250139023},
{-0.353417672599,0.720118201981,-0.990430384084,-0.321417469413,0.113306690198,-0.0554039987542,0.41075754748,-1.47859131889,-0.435975562734,0.0738035025946,0.0465990118493,-0.0796483452915,1.85582251555,1.9638649867,-0.15574710532,-0.33377750334,-1.47859131889,-0.326974487819,0.620642835556,0.614935620308,-0.409875745095},
{0.374045538343,-0.825842212503,0.999576277635,-1.22802228257,-0.393487397896,0,-0.276906442929,0.999164219362,-2.44556246517,0,0.393487397896,-0.0781349747706,0,2.44556246517,1.22802228257,0.0781349747706,-0.999164219362,-0.999576277635,0.276906442929,0.825842212503,-0.374045538343},
{-0.768318988201,1.78495264282,-2.31633105499,2.81956905229,-3.35524308124,-0.474430229004,0.387969240417,-1.37274703027,3.04648157934,-7.27148591391,5.02357963429,0.149647079901,-0.363890592504,0.640823442424,3.12487061545,0.0350196647368,-0.134707653789,-1.56117712491,0.0311342691446,0.915087174189,-0.340802726189},
{0.484951047854,0,0,0,0,0,-1.72125695283,0,0,0,0,0,0,0,0,1.75296196637,0,0,-0.786356672223,0,0.269700610832},
{-0.298013673845,0.364158535631,0.0760987600285,-0.00680301552174,0.00570721524847,0,0.606811511783,-1.55239482148,-0.108042471155,0,-0.00570721524847,-0.669012914671,0,0.108042471155,0.00680301552174,0.669012914671,1.55239482148,-0.0760987600285,-0.606811511783,-0.364158535631,0.298013673845},
{0.409875745095,-0.614935620308,0.326974487819,0.15574710532,-0.0465990118493,0.0554039987542,-0.620642835556,1.47859131889,-1.9638649867,-0.0738035025946,-0.113306690198,0.33377750334,-1.85582251555,0.435975562734,0.321417469413,0.0796483452915,1.47859131889,0.990430384084,-0.41075754748,-0.720118201981,0.353417672599},
{-1.08834005989,1.93102691707,-1.50714990853,0.591768104519,0.650573632655,-0.188398546724,1.24517561575,-3.33968228791,4.75453049884,-5.16613871168,0.0963369262454,-0.248568340432,1.93790390145,-6.09145872659,4.67748362001,-0.308937003435,0.728126915145,2.11330489373,-0.0679130293993,-1.10769292844,0.388048517612},
{-0.269700610832,0,0,0,0,0,0.786356672223,0,0,0,0,-1.75296196637,0,0,0,0,0,0,1.72125695283,0,-0.484951047854},
{0.330250139023,-0.252734601117,-0.0719832071843,0.00615176758633,0.0241718418122,-0.0437953993201,-0.722585148732,0.906531319323,0.116266218649,-0.0926329000395,0.103257063772,0.862589961997,-2.32929624652,0.116266218649,-0.136986315638,-0.952341855567,0.366307226506,0.275680427006,0.776367156829,1.16985455472,-0.451338221758},
{-1.08834005989,1.24517561575,-0.248568340432,-0.308937003435,-0.0679130293993,0.118347906779,1.93102691707,-3.33968228791,1.93790390145,0.728126915145,-0.321336256214,-1.50714990853,4.75453049884,-6.09145872659,0.360342927367,0.591768104519,-5.16613871168,4.67748362001,0.650573632655,1.81759387908,-0.673349594578},
{0.237781177984,0,0,0,0,0,-0.65354750743,0,0,0,0,1.15282815854,0,0,0,-2.52342677743,0,0,0,0,1.78636494834},
{-0.768318988201,0.387969240417,0.149647079901,0.0350196647368,0.0311342691446,-0.103021548205,1.78495264282,-1.37274703027,-0.363890592504,-0.134707653789,0.261539666759,-2.31633105499,3.04648157934,0.640823442424,-0.40834896637,2.81956905229,-7.27148591391,0.601443838017,-3.35524308124,5.02357963429,1.31193471934},
{-0.5,0,0,0,0,0,1.34991331419,0,0,0,0,-2.24468464818,0,0,0,4.03618727031,0,0,-10.1414159363,0,7.5}};

double LIFT[21][18] = {{13.5,10.1414159363,-4.03618727031,2.24468464818,-1.34991331419,0.5,-0.7,-3.97398704113,-5.82601295887,-5.82601295887,-3.97398704113,-0.7,13.5,10.1414159363,-4.03618727031,2.24468464818,-1.34991331419,0.5},
{1.78636494834,16,4.11144649196,-1.33715460678,0.677124344468,-0.237781177984,0.265828298227,1.7232943583,2.52052619971,0.749100285383,-2.04059438158,-0.699973155253,0.640302966312,-4.22489528168,1.41813655276,-0.486692468874,0.192540965623,-0.0575743389309},
{-0.484951047854,2.80446253633,16,3.32287565553,-0.912087754841,0.269700610832,-0.153248795209,-1.57950525077,-2.05769953906,1.90944393771,0.494247161027,-0.693003864026,-0.200501516949,2.54485315931,0.55604572555,-1.65813578485,1.40600102812,-0.568496260838},
{0.269700610832,-0.912087754841,3.32287565553,16,2.80446253633,-0.484951047854,-0.200501516949,2.54485315931,0.55604572555,-1.65813578485,1.40600102812,-0.568496260838,-0.153248795209,-1.57950525077,-2.05769953906,1.90944393771,0.494247161027,-0.693003864026},
{-0.237781177984,0.677124344468,-1.33715460678,4.11144649196,16,1.78636494834,0.640302966312,-4.22489528168,1.41813655276,-0.486692468874,0.192540965623,-0.0575743389309,0.265828298227,1.7232943583,2.52052619971,0.749100285383,-2.04059438158,-0.699973155253},
{0.5,-1.34991331419,2.24468464818,-4.03618727031,10.1414159363,13.5,13.5,10.1414159363,-4.03618727031,2.24468464818,-1.34991331419,0.5,-0.7,-3.97398704113,-5.82601295887,-5.82601295887,-3.97398704113,-0.7},
{0.640302966312,-4.22489528168,1.41813655276,-0.486692468874,0.192540965623,-0.0575743389309,-0.699973155253,-2.04059438158,0.749100285383,2.52052619971,1.7232943583,0.265828298227,1.78636494834,16,4.11144649196,-1.33715460678,0.677124344468,-0.237781177984},
{-0.344055026844,-1.28856565318,-1.93271902751,0.312489981047,0.0242228744655,-0.0266234682523,0.0823185176047,0.153693373453,-0.975851956605,-0.975851956605,0.153693373453,0.0823185176047,-0.344055026844,-1.28856565318,-1.93271902751,0.312489981047,0.0242228744655,-0.0266234682523},
{0.11931865138,-0.0464049693665,-1.6278995303,-1.6278995303,-0.0464049693665,0.11931865138,0.0987025967575,0.373347227646,1.29151655813,0.369705679436,-0.300654419882,0.0322711063895,0.0987025967575,0.373347227646,1.29151655813,0.369705679436,-0.300654419882,0.0322711063895},
{-0.0266234682523,0.0242228744655,0.312489981047,-1.93271902751,-1.28856565318,-0.344055026844,-0.344055026844,-1.28856565318,-1.93271902751,0.312489981047,0.0242228744655,-0.0266234682523,0.0823185176047,0.153693373453,-0.975851956605,-0.975851956605,0.153693373453,0.0823185176047},
{-0.0575743389309,0.192540965623,-0.486692468874,1.41813655276,-4.22489528168,0.640302966312,1.78636494834,16,4.11144649196,-1.33715460678,0.677124344468,-0.237781177984,-0.699973155253,-2.04059438158,0.749100285383,2.52052619971,1.7232943583,0.265828298227},
{-0.200501516949,2.54485315931,0.55604572555,-1.65813578485,1.40600102812,-0.568496260838,-0.693003864026,0.494247161027,1.90944393771,-2.05769953906,-1.57950525077,-0.153248795209,-0.484951047854,2.80446253633,16,3.32287565553,-0.912087754841,0.269700610832},
{0.0987025967575,0.373347227646,1.29151655813,0.369705679436,-0.300654419882,0.0322711063895,0.0322711063895,-0.300654419882,0.369705679436,1.29151655813,0.373347227646,0.0987025967575,0.11931865138,-0.0464049693665,-1.6278995303,-1.6278995303,-0.0464049693665,0.11931865138},
{0.0322711063895,-0.300654419882,0.369705679436,1.29151655813,0.373347227646,0.0987025967575,0.11931865138,-0.0464049693665,-1.6278995303,-1.6278995303,-0.0464049693665,0.11931865138,0.0322711063895,-0.300654419882,0.369705679436,1.29151655813,0.373347227646,0.0987025967575},
{-0.568496260838,1.40600102812,-1.65813578485,0.55604572555,2.54485315931,-0.200501516949,-0.484951047854,2.80446253633,16,3.32287565553,-0.912087754841,0.269700610832,-0.693003864026,0.494247161027,1.90944393771,-2.05769953906,-1.57950525077,-0.153248795209},
{-0.153248795209,-1.57950525077,-2.05769953906,1.90944393771,0.494247161027,-0.693003864026,-0.568496260838,1.40600102812,-1.65813578485,0.55604572555,2.54485315931,-0.200501516949,0.269700610832,-0.912087754841,3.32287565553,16,2.80446253633,-0.484951047854},
{0.0823185176047,0.153693373453,-0.975851956605,-0.975851956605,0.153693373453,0.0823185176047,-0.0266234682523,0.0242228744655,0.312489981047,-1.93271902751,-1.28856565318,-0.344055026844,-0.0266234682523,0.0242228744655,0.312489981047,-1.93271902751,-1.28856565318,-0.344055026844},
{-0.693003864026,0.494247161027,1.90944393771,-2.05769953906,-1.57950525077,-0.153248795209,0.269700610832,-0.912087754841,3.32287565553,16,2.80446253633,-0.484951047854,-0.568496260838,1.40600102812,-1.65813578485,0.55604572555,2.54485315931,-0.200501516949},
{0.265828298227,1.7232943583,2.52052619971,0.749100285383,-2.04059438158,-0.699973155253,-0.0575743389309,0.192540965623,-0.486692468874,1.41813655276,-4.22489528168,0.640302966312,-0.237781177984,0.677124344468,-1.33715460678,4.11144649196,16,1.78636494834},
{-0.699973155253,-2.04059438158,0.749100285383,2.52052619971,1.7232943583,0.265828298227,-0.237781177984,0.677124344468,-1.33715460678,4.11144649196,16,1.78636494834,-0.0575743389309,0.192540965623,-0.486692468874,1.41813655276,-4.22489528168,0.640302966312},
{-0.7,-3.97398704113,-5.82601295887,-5.82601295887,-3.97398704113,-0.7,0.5,-1.34991331419,2.24468464818,-4.03618727031,10.1414159363,13.5,0.5,-1.34991331419,2.24468464818,-4.03618727031,10.1414159363,13.5}};

double FaceMask[6][3] = {{0,5,0},
{1,10,6},
{2,14,11},
{3,17,15},
{4,19,18},
{5,20,20}};

double V[21][21] = {{0.707106781187,-1,1.22474487139,-1.41421356237,1.58113883008,-1.73205080757,-1.73205080757,2.12132034356,-2.44948974278,2.73861278753,-3,2.73861278753,-3.16227766017,3.53553390593,-3.87298334621,-3.74165738677,4.18330013267,-4.58257569496,4.74341649025,-5.19615242271,-5.74456264654},
{0.707106781187,-1,1.22474487139,-1.41421356237,1.58113883008,-1.73205080757,-1.32511469165,1.6229274226,-1.87399516863,2.09519029328,-2.29516597179,1.03509833901,-1.19522860933,1.33630620956,-1.46385010942,0.105130577603,-0.117539559017,0.128758135746,-1.52307011781,1.66843972037,2.41097533068},
{0.707106781187,-1,1.22474487139,-1.41421356237,1.58113883008,-1.73205080757,-0.494035478464,0.605067418535,-0.698671673938,0.781138678439,-0.855694549442,-1.03509833901,1.19522860933,-1.33630620956,1.46385010942,1.38378953876,-1.54712373761,1.69478914068,0.468977564417,-0.51373918199,-1.99122468161},
{0.707106781187,-1,1.22474487139,-1.41421356237,1.58113883008,-1.73205080757,0.494035478464,-0.605067418535,0.698671673938,-0.781138678439,0.855694549442,-1.03509833901,1.19522860933,-1.33630620956,1.46385010942,-1.38378953876,1.54712373761,-1.69478914068,0.468977564417,-0.51373918199,1.99122468161},
{0.707106781187,-1,1.22474487139,-1.41421356237,1.58113883008,-1.73205080757,1.32511469165,-1.6229274226,1.87399516863,-2.09519029328,2.29516597179,1.03509833901,-1.19522860933,1.33630620956,-1.46385010942,-0.105130577603,0.117539559017,-0.128758135746,-1.52307011781,1.66843972037,-2.41097533068},
{0.707106781187,-1,1.22474487139,-1.41421356237,1.58113883008,-1.73205080757,1.73205080757,-2.12132034356,2.44948974278,-2.73861278753,3,2.73861278753,-3.16227766017,3.53553390593,-3.87298334621,3.74165738677,-4.18330013267,4.58257569496,4.74341649025,-5.19615242271,5.74456264654},
{0.707106781187,-0.647582985894,0.242767455961,0.279780124956,-0.663599119422,0.726936413696,-1.52858274961,0.772510034895,0.259135206564,-1.07289051139,1.30697544968,2.13298246565,-0.43765160167,-1.05401179053,1.73830377305,-2.57186991524,-0.164621821467,1.85988236854,2.87742866863,0.921019949337,-3.07537871313},
{0.707106781187,-0.526708771753,-0.0161861752262,0.542868179304,-0.71432573834,0.425697843043,-0.912286353468,0.235956659291,0.47799107498,-0.796474444334,0.557294771699,0.168293887131,0.0202774969433,-0.136487132941,0.130294687084,0.730143427537,0.342753456508,-0.703192263266,-1.00826741455,-0.812251779385,0.521520052162},
{0.707106781187,-0.486263568004,-0.093954690542,0.600784381133,-0.682202990269,0.287453365083,0,0,0,0,0,-0.940486268227,-0.215804144363,0.830762983479,-0.656171540455,0,0,0,0.839124057826,0.812309951528,0},
{0.707106781187,-0.526708771753,-0.0161861752262,0.542868179304,-0.71432573834,0.425697843043,0.912286353468,-0.235956659291,-0.47799107498,0.796474444334,-0.557294771699,0.168293887131,0.0202774969433,-0.136487132941,0.130294687084,-0.730143427537,-0.342753456508,0.703192263266,-1.00826741455,-0.812251779385,-0.521520052162},
{0.707106781187,-0.647582985894,0.242767455961,0.279780124956,-0.663599119422,0.726936413696,1.52858274961,-0.772510034895,-0.259135206564,1.07289051139,-1.30697544968,2.13298246565,-0.43765160167,-1.05401179053,1.73830377305,2.57186991524,0.164621821467,-1.85988236854,2.87742866863,0.921019949337,3.07537871313},
{0.707106781187,0.072152725279,-0.712604296316,0.298157323147,0.548066555669,-0.600376831108,-1.11304314302,-1.0727261767,0.954550056001,0.685313138893,-1.20511760083,1.13092387856,1.96102414988,-0.175350899756,-1.69796454239,-0.992928853924,-2.46055274085,-1.06663680459,0.808903554046,2.59738763355,-0.629526223226},
{0.707106781187,0.243131784002,-0.732315306068,-0.0295579111277,0.738562337491,-0.209523175051,-0.421116602826,-0.552836509821,0.218356975271,0.495931128881,-0.295854051274,-0.22677740299,-0.497701787281,-0.161453074052,0.401648485194,0.333545789234,1.017833912,0.880917147413,-0.0788813068927,-0.307460237,-0.098691847755},
{0.707106781187,0.243131784002,-0.732315306068,-0.0295579111277,0.738562337491,-0.209523175051,0.421116602826,0.552836509821,-0.218356975271,-0.495931128881,0.295854051274,-0.22677740299,-0.497701787281,-0.161453074052,0.401648485194,-0.333545789234,-1.017833912,-0.880917147413,-0.0788813068927,-0.307460237,0.098691847755},
{0.707106781187,0.072152725279,-0.712604296316,0.298157323147,0.548066555669,-0.600376831108,1.11304314302,1.0727261767,-0.954550056001,-0.685313138893,1.20511760083,1.13092387856,1.96102414988,-0.175350899756,-1.69796454239,0.992928853924,2.46055274085,1.06663680459,0.808903554046,2.59738763355,0.629526223226},
{0.707106781187,0.927847274721,-0.0139326223777,-0.927356751523,-0.548066555669,0.600376831108,-0.619007664552,-1.67779359523,-1.71638487751,-0.0958255395458,1.57411835001,0.34978520012,1.41295759421,2.52180965387,2.17060610607,-0.170793058277,-0.913429003238,-2.27171627447,0.0773807358943,0.514427759792,-0.0334914511575},
{0.707106781187,1.05341754351,0.256273106291,-0.836973199746,-0.903403257376,0.147538729518,0,0,0,0,0,-0.136324850155,-0.596806327401,-1.216920852,-1.37743200335,0,0,0,0.0176307713304,0.126101935363,0},
{0.707106781187,0.927847274721,-0.0139326223777,-0.927356751523,-0.548066555669,0.600376831108,0.619007664552,1.67779359523,1.71638487751,0.0958255395458,-1.57411835001,0.34978520012,1.41295759421,2.52180965387,2.17060610607,0.170793058277,0.913429003238,2.27171627447,0.0773807358943,0.514427759792,0.0334914511575},
{0.707106781187,1.64758298589,2.11676262459,1.76363286579,0.663599119422,-0.726936413696,-0.203468057961,-0.850417387706,-1.94679012784,-3.16808080466,-3.96169048458,0.0377921723719,0.225947517752,0.727858125517,1.66203800948,-0.00606555933477,-0.0470822624502,-0.19453311462,0.000903303533764,0.00861654164627,-0.000128509440459},
{0.707106781187,1.64758298589,2.11676262459,1.76363286579,0.663599119422,-0.726936413696,0.203468057961,0.850417387706,1.94679012784,3.16808080466,3.96169048458,0.0377921723719,0.225947517752,0.727858125517,1.66203800948,0.00606555933477,0.0470822624502,0.19453311462,0.000903303533764,0.00861654164627,0.000128509440459},
{0.707106781187,2,3.67423461417,5.65685424949,7.90569415042,10.3923048454,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};

#endif