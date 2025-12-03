import ROOT
import numpy as np

cosang = np.loadtxt('afb.dat')

h = ROOT.TH1D("h","",50,-1,1);
for c in cosang:
    h.Fill(c)
h.Draw()
h.SetMinimum(0)

ROOT.gApplication.Run(True)
