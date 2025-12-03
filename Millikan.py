import ROOT
import numpy as np

tree = ROOT.TTree()
tree.ReadFile('Millikan.dat','t')

h = ROOT.TH1D("h", "Distribuzione della carica", 40, 0,10)
tree.Draw("t>>h")
h.Draw()
ROOT.gApplication.Run(True)
