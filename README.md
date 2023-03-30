# Package Information

This package contains all higher level reconstruction tools and selections developed for ND280 upgrade analysis.

# Reconstruction Tools

- `upgradeBaseReconUtils`: Put general reconstruction tools which are frequently used by all selections but not implemented in HighLAND master yet.

- `upgradeNumuTMVAUtils`: Tools which need TMVA. They include track PID and momentum reconstruction.

- `upgradeNumuReconUtils`: Other tools used in numu reconstruction but not depend on TMVA.

- `upgradeNueTMVAUtils`:

- `upgradeNueReconUtils`: 

- `upgradeTKIReconUtils`:

- `upgradeHadEnergyReconUtils`:

- `upgradeNeutronReconUtils`:

# Systematics

Not available now. This part will be filled once we have SFGD data and can perform real physics analysis with SFGD.

- `upgradeNumuSystematics`:

- `upgradeNueSystematics`:

# Toy Box

Container to put intermediate results during selections.

`ToyBoxRecon` is the most basic toy box. The TMVA tools are defined there. Besides, it has vectors of objects (e.g. tracks or showers) that have been reconstructed and reconstruction information is attached to each object. All other toy boxes (e.g. `ToyBoxNumu` or `ToyBoxNue`) used in the selection should inherit from this one.

- `upgradeToyBox`: 

# Selections

Main place to define selection steps.

- `upgradeNumuCCSelection`: Contains numu CC-inclusive and CC-exclusive (with pion and proton tagging) selections.

- `upgradeNueCCSelection`: 

- `upgradePGUNSelection`: Select primary track from PGUN sample. This is mainly used to validate reconstruction tools implemented in the package.

# Analysis

Summarize results from selections and save them in the output file.

- `upgradeNumuCCAnalysis`:

- `upgradeNueCCAnalysis`:

- `upgradePGUNAnalysis`:

# Category Tools

Define categories like true interaction types or true topologies that will be used later for plot drawing.

- `upgradeCategoryUtils`:

For numu selection, the categories have been already defined in package `highlandUtils` file `CategoriesUtils.hxx/cxx`. More information like true reaction or topology indices can be found in this file. In order to use it in the selection, call function `anaUtils::FillCategories` in selection analysis `FillCategories`. Three things needed for the input: event, selected main track (usually muon one) and detector ID where the selection is performed.

In the output micro tree there will be related variables like `reaction` or `topology` which can be used for plot drawing.

# Drawing Tools

Plot selection results.