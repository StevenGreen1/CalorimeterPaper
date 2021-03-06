{
gStyle->SetOptStat(0);
TCanvas *pCanvasEj = new TCanvas();
pCanvasEj->cd();
TH2F *pAxesEj = new TH2F("axesEj","",1200,0,300,12000,2,5);
pAxesEj->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
pAxesEj->GetXaxis()->SetTitle("E_{j} [GeV]");
pAxesEj->Draw();
float jetEnergy[4] = {45.5,100.0,180.0,250.0};
float jetEnergyError[4] = {0,0,0,0};

float Default_5x5_30x30_JER71[4] = {3.68144,2.90164,2.8942,2.9751};
float Default_5x5_30x30_JERError71[4] = {0.0473109,0.0371913,0.0368636,0.0381957};

float Default_5x5_30x30_JER54[4] = {3.63085,2.93721,2.88746,3.03319};
float Default_5x5_30x30_JERError54[4] = {0.0466607,0.0376473,0.0367777,0.0387567};
float Perfect_PFA_5x5_30x30_JER54[4] = {2.87508,2.0074,1.6846,1.58181};
float Perfect_PFA_5x5_30x30_JERError54[4] = {0.0369481,0.0257296,0.0214569,0.0202117};
float Total_Confusion_5x5_30x30_JER54[4] = {2.2174279506,2.14418931629,2.34511153074,2.5880723908};
float Total_Confusion_5x5_30x30_JERError54[4] = {0.0595180302233,0.0455996702007,0.0425792515093,0.0437103090931};
float Photon_Confusion_5x5_30x30_JER54[4] = {0.506984658644,0.789339140357,0.903453762624,1.1939018471};
float Photon_Confusion_5x5_30x30_JERError54[4] = {0.0656687180864,0.0522719560766,0.050723107625,0.052644216889};
float Neutral_Hadron_Confusion_5x5_30x30_JER54[4] = {1.25959841628,1.54568500853,1.79594026446,1.79465835055};
float Neutral_Hadron_Confusion_5x5_30x30_JERError54[4] = {0.0633043522462,0.0473013717,0.0437844923502,0.0448653962525};
float Other_Confusion_5x5_30x30_JER54[4] = {1.75310156628,1.25910658802,1.20744273442,1.43245191343};
float Other_Confusion_5x5_30x30_JERError54[4] = {0.056902777859,0.0398050364679,0.0340192424277,0.0339412759441};
float Default_5x5_30x30_JER46[4] = {3.80332,3.00463,2.90547,3.0567};
float Default_5x5_30x30_JERError46[4] = {0.0488772,0.0385115,0.037007,0.0390571};
float Perfect_PFA_5x5_30x30_JER46[4] = {3.1405,2.14967,1.80148,1.68314};
float Perfect_PFA_5x5_30x30_JERError46[4] = {0.0403591,0.0275531,0.0229456,0.0215064};
float Total_Confusion_5x5_30x30_JER46[4] = {2.14534444144,2.09921898048,2.27956700505,2.55155925473};
float Total_Confusion_5x5_30x30_JERError46[4] = {0.0633865595766,0.0473530824042,0.0435431832182,0.0445867848221};
float Photon_Confusion_5x5_30x30_JER46[4] = {0.60327547066,0.695062903628,0.813809948329,1.11150501011};
float Photon_Confusion_5x5_30x30_JERError46[4] = {0.0686870554085,0.0537309325148,0.0512989328189,0.0533779820403};
float Neutral_Hadron_Confusion_5x5_30x30_JER46[4] = {1.24760950193,1.58001080202,1.81571099462,1.78089198507};
float Neutral_Hadron_Confusion_5x5_30x30_JERError46[4] = {0.0663382508135,0.0489631867104,0.0446016141578,0.0461486473651};
float Other_Confusion_5x5_30x30_JER46[4] = {1.63769106049,1.19464377682,1.1123545669,1.4503223712};
float Other_Confusion_5x5_30x30_JERError46[4] = {0.0608328772396,0.0418665803339,0.0354077885835,0.0356154764439};
float Default_5x5_30x30_JER38[4] = {3.52363,2.91229,2.82625,2.91207};
float Default_5x5_30x30_JERError38[4] = {0.0452829,0.0373278,0.0359981,0.0372091};
float Perfect_PFA_5x5_30x30_JER38[4] = {2.8479,2.05525,1.78093,1.66634};
float Perfect_PFA_5x5_30x30_JERError38[4] = {0.0365989,0.0263429,0.0226838,0.0212917};
float Total_Confusion_5x5_30x30_JER38[4] = {2.07495396742,2.06334206607,2.1945335262,2.38819234763};
float Total_Confusion_5x5_30x30_JERError38[4] = {0.0582239798543,0.0456870409048,0.0425490089033,0.0428702179552};
float Photon_Confusion_5x5_30x30_JER38[4] = {0.440876278904,0.862825748631,0.97120024861,1.16959654924};
float Photon_Confusion_5x5_30x30_JERError38[4] = {0.0637952090937,0.0516175897232,0.049383364783,0.0504550345678};
float Neutral_Hadron_Confusion_5x5_30x30_JER38[4] = {1.13186311628,1.34437724066,1.56365638895,1.49782011153};
float Neutral_Hadron_Confusion_5x5_30x30_JERError38[4] = {0.0618483601742,0.0473836433377,0.0434628722367,0.0442274089466};
float Other_Confusion_5x5_30x30_JER38[4] = {1.68224491665,1.30597168572,1.19487496082,1.4463891298};
float Other_Confusion_5x5_30x30_JERError38[4] = {0.0560921715129,0.0408422608669,0.035506640623,0.0353303728495};
TLegend *pLegend = new TLegend(0.1, 0.8, 0.4, 0.9);
TLegend *pLegend2 = new TLegend(0.55, 0.55, 0.85, 0.85);

TGraphErrors *pTGraphErrors_Default_5x5_30x30_54 = new TGraphErrors(4,jetEnergy,Default_5x5_30x30_JER54,jetEnergyError,Default_5x5_30x30_JERError54);
pTGraphErrors_Default_5x5_30x30_54->SetLineStyle(1);
pTGraphErrors_Default_5x5_30x30_54->SetLineColor(10003);
pTGraphErrors_Default_5x5_30x30_54->Draw("l,same");
TGraphErrors *pTGraphErrors_Perfect_PFA_5x5_30x30_54 = new TGraphErrors(4,jetEnergy,Perfect_PFA_5x5_30x30_JER54,jetEnergyError,Perfect_PFA_5x5_30x30_JERError54);
pTGraphErrors_Perfect_PFA_5x5_30x30_54->SetLineStyle(1);
pTGraphErrors_Perfect_PFA_5x5_30x30_54->SetLineColor(4);
//pTGraphErrors_Perfect_PFA_5x5_30x30_54->Draw("lp,same");
TGraphErrors *pTGraphErrors_Total_Confusion_5x5_30x30_54 = new TGraphErrors(4,jetEnergy,Total_Confusion_5x5_30x30_JER54,jetEnergyError,Total_Confusion_5x5_30x30_JERError54);
pTGraphErrors_Total_Confusion_5x5_30x30_54->SetLineStyle(1);
pTGraphErrors_Total_Confusion_5x5_30x30_54->SetLineColor(2);
//pTGraphErrors_Total_Confusion_5x5_30x30_54->Draw("lp,same");
TGraphErrors *pTGraphErrors_Photon_Confusion_5x5_30x30_54 = new TGraphErrors(4,jetEnergy,Photon_Confusion_5x5_30x30_JER54,jetEnergyError,Photon_Confusion_5x5_30x30_JERError54);
pTGraphErrors_Photon_Confusion_5x5_30x30_54->SetLineStyle(1);
pTGraphErrors_Photon_Confusion_5x5_30x30_54->SetLineColor(kOrange);
//pTGraphErrors_Photon_Confusion_5x5_30x30_54->Draw("lp,same");
TGraphErrors *pTGraphErrors_Neutral_Hadron_Confusion_5x5_30x30_54 = new TGraphErrors(4,jetEnergy,Neutral_Hadron_Confusion_5x5_30x30_JER54,jetEnergyError,Neutral_Hadron_Confusion_5x5_30x30_JERError54);
pTGraphErrors_Neutral_Hadron_Confusion_5x5_30x30_54->SetLineStyle(1);
pTGraphErrors_Neutral_Hadron_Confusion_5x5_30x30_54->SetLineColor(8);
//pTGraphErrors_Neutral_Hadron_Confusion_5x5_30x30_54->Draw("lp,same");
TGraphErrors *pTGraphErrors_Other_Confusion_5x5_30x30_54 = new TGraphErrors(4,jetEnergy,Other_Confusion_5x5_30x30_JER54,jetEnergyError,Other_Confusion_5x5_30x30_JERError54);
pTGraphErrors_Other_Confusion_5x5_30x30_54->SetLineStyle(1);
pTGraphErrors_Other_Confusion_5x5_30x30_54->SetLineColor(6);
//pTGraphErrors_Other_Confusion_5x5_30x30_54->Draw("lp,same");
pLegend2->AddEntry(pTGraphErrors_Default_5x5_30x30_54, "#splitline{Timing Cut in ECal and HCal 300 ns,}{Hadronic Energy Truncation 1 GeV}", "l");

TGraphErrors *pTGraphErrors_Default_5x5_30x30_71 = new TGraphErrors(4,jetEnergy,Default_5x5_30x30_JER71,jetEnergyError,Default_5x5_30x30_JERError71);
pTGraphErrors_Default_5x5_30x30_71->SetLineStyle(1);
pTGraphErrors_Default_5x5_30x30_71->SetLineColor(10001);
pTGraphErrors_Default_5x5_30x30_71->Draw("l,same"); 
pLegend2->AddEntry(pTGraphErrors_Default_5x5_30x30_71, "#splitline{Timing Cut in ECal and HCal 100 ns,}{Hadronic Energy Truncation 1 GeV}", "l");


TGraphErrors *pTGraphErrors_Default_5x5_30x30_46 = new TGraphErrors(4,jetEnergy,Default_5x5_30x30_JER46,jetEnergyError,Default_5x5_30x30_JERError46);
pTGraphErrors_Default_5x5_30x30_46->SetLineStyle(1);
pTGraphErrors_Default_5x5_30x30_46->SetLineColor(2);
pTGraphErrors_Default_5x5_30x30_46->Draw("l,same");
TGraphErrors *pTGraphErrors_Perfect_PFA_5x5_30x30_46 = new TGraphErrors(4,jetEnergy,Perfect_PFA_5x5_30x30_JER46,jetEnergyError,Perfect_PFA_5x5_30x30_JERError46);
pTGraphErrors_Perfect_PFA_5x5_30x30_46->SetLineStyle(2);
pTGraphErrors_Perfect_PFA_5x5_30x30_46->SetLineColor(4);
//pTGraphErrors_Perfect_PFA_5x5_30x30_46->Draw("lp,same");
TGraphErrors *pTGraphErrors_Total_Confusion_5x5_30x30_46 = new TGraphErrors(4,jetEnergy,Total_Confusion_5x5_30x30_JER46,jetEnergyError,Total_Confusion_5x5_30x30_JERError46);
pTGraphErrors_Total_Confusion_5x5_30x30_46->SetLineStyle(2);
pTGraphErrors_Total_Confusion_5x5_30x30_46->SetLineColor(2);
//pTGraphErrors_Total_Confusion_5x5_30x30_46->Draw("lp,same");
TGraphErrors *pTGraphErrors_Photon_Confusion_5x5_30x30_46 = new TGraphErrors(4,jetEnergy,Photon_Confusion_5x5_30x30_JER46,jetEnergyError,Photon_Confusion_5x5_30x30_JERError46);
pTGraphErrors_Photon_Confusion_5x5_30x30_46->SetLineStyle(2);
pTGraphErrors_Photon_Confusion_5x5_30x30_46->SetLineColor(kOrange);
//pTGraphErrors_Photon_Confusion_5x5_30x30_46->Draw("lp,same");
TGraphErrors *pTGraphErrors_Neutral_Hadron_Confusion_5x5_30x30_46 = new TGraphErrors(4,jetEnergy,Neutral_Hadron_Confusion_5x5_30x30_JER46,jetEnergyError,Neutral_Hadron_Confusion_5x5_30x30_JERError46);
pTGraphErrors_Neutral_Hadron_Confusion_5x5_30x30_46->SetLineStyle(2);
pTGraphErrors_Neutral_Hadron_Confusion_5x5_30x30_46->SetLineColor(8);
//pTGraphErrors_Neutral_Hadron_Confusion_5x5_30x30_46->Draw("lp,same");
TGraphErrors *pTGraphErrors_Other_Confusion_5x5_30x30_46 = new TGraphErrors(4,jetEnergy,Other_Confusion_5x5_30x30_JER46,jetEnergyError,Other_Confusion_5x5_30x30_JERError46);
pTGraphErrors_Other_Confusion_5x5_30x30_46->SetLineStyle(2);
pTGraphErrors_Other_Confusion_5x5_30x30_46->SetLineColor(6);
//pTGraphErrors_Other_Confusion_5x5_30x30_46->Draw("lp,same");
pLegend2->AddEntry(pTGraphErrors_Default_5x5_30x30_46, "#splitline{Timing Cut in ECal and HCal 10 ns,}{Hadronic Energy Truncation 1 GeV}", "l");



TGraphErrors *pTGraphErrors_Default_5x5_30x30_38 = new TGraphErrors(4,jetEnergy,Default_5x5_30x30_JER38,jetEnergyError,Default_5x5_30x30_JERError38);
pTGraphErrors_Default_5x5_30x30_38->SetLineStyle(1);
pTGraphErrors_Default_5x5_30x30_38->SetLineColor(1);
pTGraphErrors_Default_5x5_30x30_38->Draw("l,same");
TGraphErrors *pTGraphErrors_Perfect_PFA_5x5_30x30_38 = new TGraphErrors(4,jetEnergy,Perfect_PFA_5x5_30x30_JER38,jetEnergyError,Perfect_PFA_5x5_30x30_JERError38);
pTGraphErrors_Perfect_PFA_5x5_30x30_38->SetLineStyle(3);
pTGraphErrors_Perfect_PFA_5x5_30x30_38->SetLineColor(4);
//pTGraphErrors_Perfect_PFA_5x5_30x30_38->Draw("lp,same");
TGraphErrors *pTGraphErrors_Total_Confusion_5x5_30x30_38 = new TGraphErrors(4,jetEnergy,Total_Confusion_5x5_30x30_JER38,jetEnergyError,Total_Confusion_5x5_30x30_JERError38);
pTGraphErrors_Total_Confusion_5x5_30x30_38->SetLineStyle(3);
pTGraphErrors_Total_Confusion_5x5_30x30_38->SetLineColor(2);
//pTGraphErrors_Total_Confusion_5x5_30x30_38->Draw("lp,same");
TGraphErrors *pTGraphErrors_Photon_Confusion_5x5_30x30_38 = new TGraphErrors(4,jetEnergy,Photon_Confusion_5x5_30x30_JER38,jetEnergyError,Photon_Confusion_5x5_30x30_JERError38);
pTGraphErrors_Photon_Confusion_5x5_30x30_38->SetLineStyle(3);
pTGraphErrors_Photon_Confusion_5x5_30x30_38->SetLineColor(kOrange);
//pTGraphErrors_Photon_Confusion_5x5_30x30_38->Draw("lp,same");
TGraphErrors *pTGraphErrors_Neutral_Hadron_Confusion_5x5_30x30_38 = new TGraphErrors(4,jetEnergy,Neutral_Hadron_Confusion_5x5_30x30_JER38,jetEnergyError,Neutral_Hadron_Confusion_5x5_30x30_JERError38);
pTGraphErrors_Neutral_Hadron_Confusion_5x5_30x30_38->SetLineStyle(3);
pTGraphErrors_Neutral_Hadron_Confusion_5x5_30x30_38->SetLineColor(8);
//pTGraphErrors_Neutral_Hadron_Confusion_5x5_30x30_38->Draw("lp,same");
TGraphErrors *pTGraphErrors_Other_Confusion_5x5_30x30_38 = new TGraphErrors(4,jetEnergy,Other_Confusion_5x5_30x30_JER38,jetEnergyError,Other_Confusion_5x5_30x30_JERError38);
pTGraphErrors_Other_Confusion_5x5_30x30_38->SetLineStyle(3);
pTGraphErrors_Other_Confusion_5x5_30x30_38->SetLineColor(6);
//pTGraphErrors_Other_Confusion_5x5_30x30_38->Draw("lp,same");
pLegend2->AddEntry(pTGraphErrors_Default_5x5_30x30_38, "#splitline{Timing Cut in ECal and HCal 10^{6} ns,}{Hadronic Energy Truncation 1 GeV}", "l");
pLegend->AddEntry(pTGraphErrors_Default_5x5_30x30_54, "Default", "l");
pLegend->AddEntry(pTGraphErrors_Perfect_PFA_5x5_30x30_54, "Perfect_PFA", "l");
pLegend->AddEntry(pTGraphErrors_Total_Confusion_5x5_30x30_54, "Total_Confusion", "l");
pLegend->AddEntry(pTGraphErrors_Photon_Confusion_5x5_30x30_54, "Photon_Confusion", "l");
pLegend->AddEntry(pTGraphErrors_Neutral_Hadron_Confusion_5x5_30x30_54, "Neutral_Hadron_Confusion", "l");
pLegend->AddEntry(pTGraphErrors_Other_Confusion_5x5_30x30_54, "Other_Confusion", "l");
//pLegend->Draw();
pLegend2->Draw();
pCanvasEj->SaveAs("JER_vs_Ej.pdf");
}
