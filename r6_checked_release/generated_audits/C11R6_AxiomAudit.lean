/- Copyright (c) 2026 Matthew Protti. Apache-2.0.
Generated from the frozen R6 certificates; the BPZ framework is unchanged. -/
import ShannonBounds.C11R6

set_option autoImplicit false
set_option pp.fullNames true
set_option pp.universes true
set_option pp.proofs false

open ShannonBounds

theorem R6_scope_set_186 : ∃ S : Finset (Fin 186 → Fin 11),
    (SimpleGraph.strongPower (SimpleGraph.cycleGraph 11) 186).IsIndepSet ↑S ∧ S.card = 443276324003031783611356421181113884309761038339701682272503913637018224991280684849272770480887399420629190490478636970970895319532912 :=
  C11R6D186.exists_code

theorem R6_scope_capacity_186 : (5.295498536418623 : ℝ) ≤ shannonCapacity (SimpleGraph.cycleGraph 11) := C11R6D186.capacity_lower

theorem R6_scope_bracket_186 : (5295498536418623 : ℝ) / 1000000000000000 ≤ (443276324003031783611356421181113884309761038339701682272503913637018224991280684849272770480887399420629190490478636970970895319532912 : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) ∧
    (443276324003031783611356421181113884309761038339701682272503913637018224991280684849272770480887399420629190490478636970970895319532912 : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) < (5295498536418624 : ℝ) / 1000000000000000 := C11R6D186.root_bracket

theorem R6_scope_comparison_186_BPZ_207 : (705688158939417766083006128695703821080101605304173623991920300506716846627203440324635068341693109509608786929844839653207121849017872676157797788816 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (443276324003031783611356421181113884309761038339701682272503913637018224991280684849272770480887399420629190490478636970970895319532912 : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) := C11R6D186.strict_root_BPZ_207

theorem R6_scope_comparison_186_R3_207 : (705692619930489413584189552943991443716392885026759451863953624242911159057444856108323516589876967077721069272782760798453832061060020786354479288616 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (443276324003031783611356421181113884309761038339701682272503913637018224991280684849272770480887399420629190490478636970970895319532912 : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) := C11R6D186.strict_root_R3_207

theorem R6_scope_comparison_186_R4_201 : (32002673683286069537407802496635290542708504485557757541357004314290758191808590819113831084345541929742202157575979409830403540320810360987701516 : ℝ) ^ ((1 : ℝ) / (201 : ℕ)) <
    (443276324003031783611356421181113884309761038339701682272503913637018224991280684849272770480887399420629190490478636970970895319532912 : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) := C11R6D186.strict_root_R4_201

theorem R6_scope_comparison_186_R4_210 : (104801829423661587743253299322841646006536831006849180624356444952325998520513365767989569418211784335842097686417867068684116769869616301057472136612714 : ℝ) ^ ((1 : ℝ) / (210 : ℕ)) <
    (443276324003031783611356421181113884309761038339701682272503913637018224991280684849272770480887399420629190490478636970970895319532912 : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) := C11R6D186.strict_root_R4_210

theorem R6_scope_comparison_186_R5 : (443270157200265347115284826329865904474755713155493374073233878851201668185355198338517321290509706352279222882837542619589988350408464 : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) <
    (443276324003031783611356421181113884309761038339701682272503913637018224991280684849272770480887399420629190490478636970970895319532912 : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) := C11R6D186.strict_root_R5

theorem R6_scope_set_198 : ∃ S : Finset (Fin 198 → Fin 11),
    (SimpleGraph.strongPower (SimpleGraph.cycleGraph 11) 198).IsIndepSet ↑S ∧ S.card = 215650308240559271076661927763289270756233042340399408085079498236580156319151638131903708724387292184834844476542038069560746092535997639387752 :=
  C11R6D198.exists_code

theorem R6_scope_capacity_198 : (5.295510441529957 : ℝ) ≤ shannonCapacity (SimpleGraph.cycleGraph 11) := C11R6D198.capacity_lower

theorem R6_scope_bracket_198 : (5295510441529957 : ℝ) / 1000000000000000 ≤ (215650308240559271076661927763289270756233042340399408085079498236580156319151638131903708724387292184834844476542038069560746092535997639387752 : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) ∧
    (215650308240559271076661927763289270756233042340399408085079498236580156319151638131903708724387292184834844476542038069560746092535997639387752 : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) < (5295510441529958 : ℝ) / 1000000000000000 := C11R6D198.root_bracket

theorem R6_scope_comparison_198_BPZ_207 : (705688158939417766083006128695703821080101605304173623991920300506716846627203440324635068341693109509608786929844839653207121849017872676157797788816 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (215650308240559271076661927763289270756233042340399408085079498236580156319151638131903708724387292184834844476542038069560746092535997639387752 : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) := C11R6D198.strict_root_BPZ_207

theorem R6_scope_comparison_198_R3_207 : (705692619930489413584189552943991443716392885026759451863953624242911159057444856108323516589876967077721069272782760798453832061060020786354479288616 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (215650308240559271076661927763289270756233042340399408085079498236580156319151638131903708724387292184834844476542038069560746092535997639387752 : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) := C11R6D198.strict_root_R3_207

theorem R6_scope_comparison_198_R4_201 : (32002673683286069537407802496635290542708504485557757541357004314290758191808590819113831084345541929742202157575979409830403540320810360987701516 : ℝ) ^ ((1 : ℝ) / (201 : ℕ)) <
    (215650308240559271076661927763289270756233042340399408085079498236580156319151638131903708724387292184834844476542038069560746092535997639387752 : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) := C11R6D198.strict_root_R4_201

theorem R6_scope_comparison_198_R4_210 : (104801829423661587743253299322841646006536831006849180624356444952325998520513365767989569418211784335842097686417867068684116769869616301057472136612714 : ℝ) ^ ((1 : ℝ) / (210 : ℕ)) <
    (215650308240559271076661927763289270756233042340399408085079498236580156319151638131903708724387292184834844476542038069560746092535997639387752 : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) := C11R6D198.strict_root_R4_210

theorem R6_scope_comparison_198_R5 : (215646095940880307358247576980823349483595594251592326034771350156505941167027753389393565833792562656142818333030435546482415612817144515859336 : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) <
    (215650308240559271076661927763289270756233042340399408085079498236580156319151638131903708724387292184834844476542038069560746092535997639387752 : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) := C11R6D198.strict_root_R5

theorem R6_scope_set_213 : ∃ S : Finset (Fin 213 → Fin 11),
    (SimpleGraph.strongPower (SimpleGraph.cycleGraph 11) 213).IsIndepSet ↑S ∧ S.card = 15576025705482926919349953542643365905237782337909670850715691763072207372542781005458638810301625659402522397392173748140017563747809127752382797850207774 :=
  C11R6D213.exists_code

theorem R6_scope_capacity_213 : (5.295515544509239 : ℝ) ≤ shannonCapacity (SimpleGraph.cycleGraph 11) := C11R6D213.capacity_lower

theorem R6_scope_bracket_213 : (5295515544509239 : ℝ) / 1000000000000000 ≤ (15576025705482926919349953542643365905237782337909670850715691763072207372542781005458638810301625659402522397392173748140017563747809127752382797850207774 : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) ∧
    (15576025705482926919349953542643365905237782337909670850715691763072207372542781005458638810301625659402522397392173748140017563747809127752382797850207774 : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) < (5295515544509240 : ℝ) / 1000000000000000 := C11R6D213.root_bracket

theorem R6_scope_comparison_213_BPZ_207 : (705688158939417766083006128695703821080101605304173623991920300506716846627203440324635068341693109509608786929844839653207121849017872676157797788816 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (15576025705482926919349953542643365905237782337909670850715691763072207372542781005458638810301625659402522397392173748140017563747809127752382797850207774 : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) := C11R6D213.strict_root_BPZ_207

theorem R6_scope_comparison_213_R3_207 : (705692619930489413584189552943991443716392885026759451863953624242911159057444856108323516589876967077721069272782760798453832061060020786354479288616 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (15576025705482926919349953542643365905237782337909670850715691763072207372542781005458638810301625659402522397392173748140017563747809127752382797850207774 : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) := C11R6D213.strict_root_R3_207

theorem R6_scope_comparison_213_R4_201 : (32002673683286069537407802496635290542708504485557757541357004314290758191808590819113831084345541929742202157575979409830403540320810360987701516 : ℝ) ^ ((1 : ℝ) / (201 : ℕ)) <
    (15576025705482926919349953542643365905237782337909670850715691763072207372542781005458638810301625659402522397392173748140017563747809127752382797850207774 : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) := C11R6D213.strict_root_R4_201

theorem R6_scope_comparison_213_R4_210 : (104801829423661587743253299322841646006536831006849180624356444952325998520513365767989569418211784335842097686417867068684116769869616301057472136612714 : ℝ) ^ ((1 : ℝ) / (210 : ℕ)) <
    (15576025705482926919349953542643365905237782337909670850715691763072207372542781005458638810301625659402522397392173748140017563747809127752382797850207774 : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) := C11R6D213.strict_root_R4_210

theorem R6_scope_comparison_213_R5 : (15575655426175670262980356243306221873167074980689569793363838130479999529429857666850517103134244772329978664731663687319144867678577766570404657587474324 : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) <
    (15576025705482926919349953542643365905237782337909670850715691763072207372542781005458638810301625659402522397392173748140017563747809127752382797850207774 : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) := C11R6D213.strict_root_R5

#check R6_scope_set_186
#check R6_scope_capacity_186
#check R6_scope_bracket_186
#check R6_scope_comparison_186_BPZ_207
#check R6_scope_comparison_186_R3_207
#check R6_scope_comparison_186_R4_201
#check R6_scope_comparison_186_R4_210
#check R6_scope_comparison_186_R5
#check R6_scope_set_198
#check R6_scope_capacity_198
#check R6_scope_bracket_198
#check R6_scope_comparison_198_BPZ_207
#check R6_scope_comparison_198_R3_207
#check R6_scope_comparison_198_R4_201
#check R6_scope_comparison_198_R4_210
#check R6_scope_comparison_198_R5
#check R6_scope_set_213
#check R6_scope_capacity_213
#check R6_scope_bracket_213
#check R6_scope_comparison_213_BPZ_207
#check R6_scope_comparison_213_R3_207
#check R6_scope_comparison_213_R4_201
#check R6_scope_comparison_213_R4_210
#check R6_scope_comparison_213_R5

#print axioms ShannonBounds.C11R6ListChecks.of_inside
#print axioms ShannonBounds.C11R6ListChecks.of_between
#print axioms ShannonBounds.C11R6ListChecks.wordApart_iff
#print axioms ShannonBounds.C11R6ListChecks.substFromLists
#print axioms ShannonBounds.C11R6ListChecks.codeFromList
#print axioms ShannonBounds.C11R6Base.typedSep_symm
#print axioms ShannonBounds.C11R6Base.typedSep_irrefl
#print axioms ShannonBounds.C11R6Base.descriptors_injective
#print axioms ShannonBounds.C11R6Base.normalized
#print axioms ShannonBounds.C11R6Base.normalized_complete
#print axioms ShannonBounds.C11R6Base.coarseLists_eq
#print axioms ShannonBounds.C11R6Base.baseLists_meaning
#print axioms ShannonBounds.C11R6Base.base
#print axioms ShannonBounds.C11R6Base.base_weights
#print axioms ShannonBounds.C11R6Tables.S_d49651680030e3710982
#print axioms ShannonBounds.C11R6Tables.S_953611f4b154a3d6901c
#print axioms ShannonBounds.C11R6Tables.S_25f0774c2afeeb30a0e8
#print axioms ShannonBounds.C11R6Tables.S_22cac8b4c63f11109b61
#print axioms ShannonBounds.C11R6Tables.S_9783e6b9166dfb4049c4
#print axioms ShannonBounds.C11R6Tables.S_988a6e27a74069e613e5
#print axioms ShannonBounds.C11R6Tables.S_e6624479a4e7b8218273
#print axioms ShannonBounds.C11R6Tables.S_275feb4472b545b7b61b
#print axioms ShannonBounds.C11R6Tables.S_f7172ffe1ee10decfde4
#print axioms ShannonBounds.C11R6Tables.S_564505af0066fa9bc893
#print axioms ShannonBounds.C11R6Tables.S_cc72ba3cc3d211951e7b
#print axioms ShannonBounds.C11R6Tables.S_2d78eefa50581f5d0332
#print axioms ShannonBounds.C11R6Tables.S_5ca90dee5abae9298a15
#print axioms ShannonBounds.C11R6Tables.S_ece408aa34da4a12a217
#print axioms ShannonBounds.C11R6Tables.S_bd87a4825e888e5d22f9
#print axioms ShannonBounds.C11R6Tables.S_cf346b778e5d726ffeff
#print axioms ShannonBounds.C11R6Tables.S_6d1e67cc209acfd23ff3
#print axioms ShannonBounds.C11R6Tables.S_5c2653637645ea08c462
#print axioms ShannonBounds.C11R6Tables.S_73383c091e7d3a586822
#print axioms ShannonBounds.C11R6Tables.S_bed27dc006b01fbbbcf8
#print axioms ShannonBounds.C11R6Tables.S_d101ee426b09eceb0f46
#print axioms ShannonBounds.C11R6Tables.S_51b4bb7e33ca836fee10
#print axioms ShannonBounds.C11R6Tables.S_7461db4595a77df35801
#print axioms ShannonBounds.C11R6Tables.S_e91967edd2b512831205
#print axioms ShannonBounds.C11R6Tables.S_2ed8d12cfe031f31782c
#print axioms ShannonBounds.C11R6Tables.S_bfd644574c544c933581
#print axioms ShannonBounds.C11R6Tables.S_bc598aabfc397b015309
#print axioms ShannonBounds.C11R6Tables.S_1de129ef1fff89d74bef
#print axioms ShannonBounds.C11R6Tables.S_562e2180d94b76a35d8a
#print axioms ShannonBounds.C11R6Tables.S_9b70f31dd1696e52e328
#print axioms ShannonBounds.C11R6Tables.S_b0b2c46dc9f8db336b46
#print axioms ShannonBounds.C11R6Tables.S_960de25190a3bed445b8
#print axioms ShannonBounds.C11R6Tables.S_01c047685d920c22640e
#print axioms ShannonBounds.C11R6Tables.S_669343cc17cb8eaf6957
#print axioms ShannonBounds.C11R6Tables.S_f95d1e072279bb3bfc11
#print axioms ShannonBounds.C11R6Tables.S_c28c6dd5607aacbad7ef
#print axioms ShannonBounds.C11R6Tables.S_37294a683db0ad79cd1a
#print axioms ShannonBounds.C11R6Tables.S_7586a2b6c341612c9fdc
#print axioms ShannonBounds.C11R6Tables.S_d1d88f72dc4352a983e3
#print axioms ShannonBounds.C11R6Tables.S_074e7a7a1e957b03d9a5
#print axioms ShannonBounds.C11R6Tables.S_eb2a8ddaf8495ec01f08
#print axioms ShannonBounds.C11R6Tables.S_44a85870cefbc01c28eb
#print axioms ShannonBounds.C11R6Tables.S_95e5655d1469530ce7ff
#print axioms ShannonBounds.C11R6Tables.S_a40f1a6f9aa075037da0
#print axioms ShannonBounds.C11R6Tables.S_8d02c2ed12c9b02124d5
#print axioms ShannonBounds.C11R6Tables.S_1b00b10f49b6c4e9759e
#print axioms ShannonBounds.C11R6Tables.S_090125a02835a8ea74a1
#print axioms ShannonBounds.C11R6Tables.S_c166eae8054ce1f6ee50
#print axioms ShannonBounds.C11R6Tables.S_3d79de065120229628e3
#print axioms ShannonBounds.C11R6D186.card_codeBase
#print axioms ShannonBounds.C11R6D186.card_code
#print axioms ShannonBounds.C11R6D186.independent_code
#print axioms ShannonBounds.C11R6D186.exists_code
#print axioms ShannonBounds.C11R6D186.alpha_ge
#print axioms ShannonBounds.C11R6D186.capacity_root
#print axioms ShannonBounds.C11R6D186.root_bracket
#print axioms ShannonBounds.C11R6D186.capacity_lower
#print axioms ShannonBounds.C11R6D186.strictly_larger_R5
#print axioms ShannonBounds.C11R6D186.cross_power_R5
#print axioms ShannonBounds.C11R6D186.strict_root_R5
#print axioms ShannonBounds.C11R6D186.step_v
#print axioms ShannonBounds.C11R6D186.step_n1
#print axioms ShannonBounds.C11R6D186.step_n2
#print axioms ShannonBounds.C11R6D186.step_n3
#print axioms ShannonBounds.C11R6D186.step_n4
#print axioms ShannonBounds.C11R6D186.step_n5
#print axioms ShannonBounds.C11R6D186.step_n6
#print axioms ShannonBounds.C11R6D186.step_n7
#print axioms ShannonBounds.C11R6D186.step_n8
#print axioms ShannonBounds.C11R6D186.step_n9
#print axioms ShannonBounds.C11R6D186.step_n10
#print axioms ShannonBounds.C11R6D186.step_n11
#print axioms ShannonBounds.C11R6D186.step_n12
#print axioms ShannonBounds.C11R6D186.step_n13
#print axioms ShannonBounds.C11R6D186.step_n14
#print axioms ShannonBounds.C11R6D186.step_n15
#print axioms ShannonBounds.C11R6D186.step_n16
#print axioms ShannonBounds.C11R6D186.step_n17
#print axioms ShannonBounds.C11R6D186.step_n18
#print axioms ShannonBounds.C11R6D186.step_n19
#print axioms ShannonBounds.C11R6D186.step_n20
#print axioms ShannonBounds.C11R6D186.step_n21
#print axioms ShannonBounds.C11R6D186.step_n22
#print axioms ShannonBounds.C11R6D186.step_n23
#print axioms ShannonBounds.C11R6D186.step_n24
#print axioms ShannonBounds.C11R6D186.step_n25
#print axioms ShannonBounds.C11R6D186.step_n26
#print axioms ShannonBounds.C11R6D186.cross_power_BPZ_207
#print axioms ShannonBounds.C11R6D186.strict_root_BPZ_207
#print axioms ShannonBounds.C11R6D186.cross_power_R3_207
#print axioms ShannonBounds.C11R6D186.strict_root_R3_207
#print axioms ShannonBounds.C11R6D186.cross_power_R4_201
#print axioms ShannonBounds.C11R6D186.strict_root_R4_201
#print axioms ShannonBounds.C11R6D186.cross_power_R4_210
#print axioms ShannonBounds.C11R6D186.strict_root_R4_210
#print axioms ShannonBounds.C11R6D198.card_codeBase
#print axioms ShannonBounds.C11R6D198.card_code
#print axioms ShannonBounds.C11R6D198.independent_code
#print axioms ShannonBounds.C11R6D198.exists_code
#print axioms ShannonBounds.C11R6D198.alpha_ge
#print axioms ShannonBounds.C11R6D198.capacity_root
#print axioms ShannonBounds.C11R6D198.root_bracket
#print axioms ShannonBounds.C11R6D198.capacity_lower
#print axioms ShannonBounds.C11R6D198.strictly_larger_R5
#print axioms ShannonBounds.C11R6D198.cross_power_R5
#print axioms ShannonBounds.C11R6D198.strict_root_R5
#print axioms ShannonBounds.C11R6D198.step_v
#print axioms ShannonBounds.C11R6D198.step_n1
#print axioms ShannonBounds.C11R6D198.step_n2
#print axioms ShannonBounds.C11R6D198.step_n3
#print axioms ShannonBounds.C11R6D198.step_n4
#print axioms ShannonBounds.C11R6D198.step_n5
#print axioms ShannonBounds.C11R6D198.step_n6
#print axioms ShannonBounds.C11R6D198.step_n7
#print axioms ShannonBounds.C11R6D198.step_n8
#print axioms ShannonBounds.C11R6D198.step_n9
#print axioms ShannonBounds.C11R6D198.step_n10
#print axioms ShannonBounds.C11R6D198.step_n11
#print axioms ShannonBounds.C11R6D198.step_n12
#print axioms ShannonBounds.C11R6D198.step_n13
#print axioms ShannonBounds.C11R6D198.step_n14
#print axioms ShannonBounds.C11R6D198.step_n15
#print axioms ShannonBounds.C11R6D198.step_n16
#print axioms ShannonBounds.C11R6D198.step_n17
#print axioms ShannonBounds.C11R6D198.step_n18
#print axioms ShannonBounds.C11R6D198.step_n19
#print axioms ShannonBounds.C11R6D198.step_n20
#print axioms ShannonBounds.C11R6D198.step_n21
#print axioms ShannonBounds.C11R6D198.step_n22
#print axioms ShannonBounds.C11R6D198.step_n23
#print axioms ShannonBounds.C11R6D198.step_n24
#print axioms ShannonBounds.C11R6D198.step_n25
#print axioms ShannonBounds.C11R6D198.step_n26
#print axioms ShannonBounds.C11R6D198.step_n27
#print axioms ShannonBounds.C11R6D198.step_n28
#print axioms ShannonBounds.C11R6D198.step_n29
#print axioms ShannonBounds.C11R6D198.cross_power_BPZ_207
#print axioms ShannonBounds.C11R6D198.strict_root_BPZ_207
#print axioms ShannonBounds.C11R6D198.cross_power_R3_207
#print axioms ShannonBounds.C11R6D198.strict_root_R3_207
#print axioms ShannonBounds.C11R6D198.cross_power_R4_201
#print axioms ShannonBounds.C11R6D198.strict_root_R4_201
#print axioms ShannonBounds.C11R6D198.cross_power_R4_210
#print axioms ShannonBounds.C11R6D198.strict_root_R4_210
#print axioms ShannonBounds.C11R6D213.card_codeBase
#print axioms ShannonBounds.C11R6D213.card_code
#print axioms ShannonBounds.C11R6D213.independent_code
#print axioms ShannonBounds.C11R6D213.exists_code
#print axioms ShannonBounds.C11R6D213.alpha_ge
#print axioms ShannonBounds.C11R6D213.capacity_root
#print axioms ShannonBounds.C11R6D213.root_bracket
#print axioms ShannonBounds.C11R6D213.capacity_lower
#print axioms ShannonBounds.C11R6D213.strictly_larger_R5
#print axioms ShannonBounds.C11R6D213.cross_power_R5
#print axioms ShannonBounds.C11R6D213.strict_root_R5
#print axioms ShannonBounds.C11R6D213.step_v
#print axioms ShannonBounds.C11R6D213.step_n1
#print axioms ShannonBounds.C11R6D213.step_n2
#print axioms ShannonBounds.C11R6D213.step_n3
#print axioms ShannonBounds.C11R6D213.step_n4
#print axioms ShannonBounds.C11R6D213.step_n5
#print axioms ShannonBounds.C11R6D213.step_n6
#print axioms ShannonBounds.C11R6D213.step_n7
#print axioms ShannonBounds.C11R6D213.step_n8
#print axioms ShannonBounds.C11R6D213.step_n9
#print axioms ShannonBounds.C11R6D213.step_n10
#print axioms ShannonBounds.C11R6D213.step_n11
#print axioms ShannonBounds.C11R6D213.step_n12
#print axioms ShannonBounds.C11R6D213.step_n13
#print axioms ShannonBounds.C11R6D213.step_n14
#print axioms ShannonBounds.C11R6D213.step_n15
#print axioms ShannonBounds.C11R6D213.step_n16
#print axioms ShannonBounds.C11R6D213.step_n17
#print axioms ShannonBounds.C11R6D213.step_n18
#print axioms ShannonBounds.C11R6D213.step_n19
#print axioms ShannonBounds.C11R6D213.step_n20
#print axioms ShannonBounds.C11R6D213.step_n21
#print axioms ShannonBounds.C11R6D213.step_n22
#print axioms ShannonBounds.C11R6D213.step_n23
#print axioms ShannonBounds.C11R6D213.step_n24
#print axioms ShannonBounds.C11R6D213.step_n25
#print axioms ShannonBounds.C11R6D213.step_n26
#print axioms ShannonBounds.C11R6D213.step_n27
#print axioms ShannonBounds.C11R6D213.step_n28
#print axioms ShannonBounds.C11R6D213.step_n29
#print axioms ShannonBounds.C11R6D213.step_n30
#print axioms ShannonBounds.C11R6D213.cross_power_BPZ_207
#print axioms ShannonBounds.C11R6D213.strict_root_BPZ_207
#print axioms ShannonBounds.C11R6D213.cross_power_R3_207
#print axioms ShannonBounds.C11R6D213.strict_root_R3_207
#print axioms ShannonBounds.C11R6D213.cross_power_R4_201
#print axioms ShannonBounds.C11R6D213.strict_root_R4_201
#print axioms ShannonBounds.C11R6D213.cross_power_R4_210
#print axioms ShannonBounds.C11R6D213.strict_root_R4_210
#print axioms R6_scope_set_186
#print axioms R6_scope_capacity_186
#print axioms R6_scope_bracket_186
#print axioms R6_scope_comparison_186_BPZ_207
#print axioms R6_scope_comparison_186_R3_207
#print axioms R6_scope_comparison_186_R4_201
#print axioms R6_scope_comparison_186_R4_210
#print axioms R6_scope_comparison_186_R5
#print axioms R6_scope_set_198
#print axioms R6_scope_capacity_198
#print axioms R6_scope_bracket_198
#print axioms R6_scope_comparison_198_BPZ_207
#print axioms R6_scope_comparison_198_R3_207
#print axioms R6_scope_comparison_198_R4_201
#print axioms R6_scope_comparison_198_R4_210
#print axioms R6_scope_comparison_198_R5
#print axioms R6_scope_set_213
#print axioms R6_scope_capacity_213
#print axioms R6_scope_bracket_213
#print axioms R6_scope_comparison_213_BPZ_207
#print axioms R6_scope_comparison_213_R3_207
#print axioms R6_scope_comparison_213_R4_201
#print axioms R6_scope_comparison_213_R4_210
#print axioms R6_scope_comparison_213_R5
