import ROOT
import numpy as np

tree = ROOT.TTree()
tree.ReadFile('Millikan.dat','q')

h = ROOT.TH1D("h", "Distribuzione della carica", 40, 0,10)

tree.Draw("q>>h")
h.Draw("E")

ROOT.gApplication.Run(True)
