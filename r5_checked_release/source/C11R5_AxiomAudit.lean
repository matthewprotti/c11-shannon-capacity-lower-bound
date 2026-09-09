/-
Copyright (c) 2026 Matthew Protti. Released under Apache 2.0.
Generated from unchanged R5 certificate JSON; do not hand-edit the literals.
Uses BPZ's pinned framework (Buys, Polak, Zuiddam), without changing it.
-/
import ShannonBounds.C11R5

set_option autoImplicit false
set_option pp.universes true
set_option pp.fullNames true
set_option pp.proofs false

open ShannonBounds

theorem R5_scope_set_186 :
    ∃ S : Finset (Fin 186 → Fin 11),
      (SimpleGraph.strongPower (SimpleGraph.cycleGraph 11) 186).IsIndepSet ↑S ∧ S.card = 443270157200265347115284826329865904474755713155493374073233878851201668185355198338517321290509706352279222882837542619589988350408464 :=
  C11R5D186.exists_code

theorem R5_scope_capacity_186 : (5.295498140339058 : ℝ) ≤
    shannonCapacity (SimpleGraph.cycleGraph 11) := C11R5D186.capacity_lower

theorem R5_scope_bracket_186 :
    (5295498140339058 : ℝ) / 1000000000000000 ≤ (443270157200265347115284826329865904474755713155493374073233878851201668185355198338517321290509706352279222882837542619589988350408464 : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) ∧
    (443270157200265347115284826329865904474755713155493374073233878851201668185355198338517321290509706352279222882837542619589988350408464 : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) < (5295498140339059 : ℝ) / 1000000000000000 :=
  C11R5D186.root_bracket

theorem R5_scope_comparison_186_BPZ_207 :
    (705688158939417766083006128695703821080101605304173623991920300506716846627203440324635068341693109509608786929844839653207121849017872676157797788816 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (443270157200265347115284826329865904474755713155493374073233878851201668185355198338517321290509706352279222882837542619589988350408464 : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) := C11R5D186.strict_root_BPZ_207

theorem R5_scope_comparison_186_R3_207 :
    (705692619930489413584189552943991443716392885026759451863953624242911159057444856108323516589876967077721069272782760798453832061060020786354479288616 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (443270157200265347115284826329865904474755713155493374073233878851201668185355198338517321290509706352279222882837542619589988350408464 : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) := C11R5D186.strict_root_R3_207

theorem R5_scope_comparison_186_R4_201 :
    (32002673683286069537407802496635290542708504485557757541357004314290758191808590819113831084345541929742202157575979409830403540320810360987701516 : ℝ) ^ ((1 : ℝ) / (201 : ℕ)) <
    (443270157200265347115284826329865904474755713155493374073233878851201668185355198338517321290509706352279222882837542619589988350408464 : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) := C11R5D186.strict_root_R4_201

theorem R5_scope_comparison_186_R4_210 :
    (104801829423661587743253299322841646006536831006849180624356444952325998520513365767989569418211784335842097686417867068684116769869616301057472136612714 : ℝ) ^ ((1 : ℝ) / (210 : ℕ)) <
    (443270157200265347115284826329865904474755713155493374073233878851201668185355198338517321290509706352279222882837542619589988350408464 : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) := C11R5D186.strict_root_R4_210

theorem R5_scope_set_198 :
    ∃ S : Finset (Fin 198 → Fin 11),
      (SimpleGraph.strongPower (SimpleGraph.cycleGraph 11) 198).IsIndepSet ↑S ∧ S.card = 215646095940880307358247576980823349483595594251592326034771350156505941167027753389393565833792562656142818333030435546482415612817144515859336 :=
  C11R5D198.exists_code

theorem R5_scope_capacity_198 : (5.295509919114478 : ℝ) ≤
    shannonCapacity (SimpleGraph.cycleGraph 11) := C11R5D198.capacity_lower

theorem R5_scope_bracket_198 :
    (5295509919114478 : ℝ) / 1000000000000000 ≤ (215646095940880307358247576980823349483595594251592326034771350156505941167027753389393565833792562656142818333030435546482415612817144515859336 : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) ∧
    (215646095940880307358247576980823349483595594251592326034771350156505941167027753389393565833792562656142818333030435546482415612817144515859336 : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) < (5295509919114479 : ℝ) / 1000000000000000 :=
  C11R5D198.root_bracket

theorem R5_scope_comparison_198_BPZ_207 :
    (705688158939417766083006128695703821080101605304173623991920300506716846627203440324635068341693109509608786929844839653207121849017872676157797788816 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (215646095940880307358247576980823349483595594251592326034771350156505941167027753389393565833792562656142818333030435546482415612817144515859336 : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) := C11R5D198.strict_root_BPZ_207

theorem R5_scope_comparison_198_R3_207 :
    (705692619930489413584189552943991443716392885026759451863953624242911159057444856108323516589876967077721069272782760798453832061060020786354479288616 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (215646095940880307358247576980823349483595594251592326034771350156505941167027753389393565833792562656142818333030435546482415612817144515859336 : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) := C11R5D198.strict_root_R3_207

theorem R5_scope_comparison_198_R4_201 :
    (32002673683286069537407802496635290542708504485557757541357004314290758191808590819113831084345541929742202157575979409830403540320810360987701516 : ℝ) ^ ((1 : ℝ) / (201 : ℕ)) <
    (215646095940880307358247576980823349483595594251592326034771350156505941167027753389393565833792562656142818333030435546482415612817144515859336 : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) := C11R5D198.strict_root_R4_201

theorem R5_scope_comparison_198_R4_210 :
    (104801829423661587743253299322841646006536831006849180624356444952325998520513365767989569418211784335842097686417867068684116769869616301057472136612714 : ℝ) ^ ((1 : ℝ) / (210 : ℕ)) <
    (215646095940880307358247576980823349483595594251592326034771350156505941167027753389393565833792562656142818333030435546482415612817144515859336 : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) := C11R5D198.strict_root_R4_210

theorem R5_scope_set_213 :
    ∃ S : Finset (Fin 213 → Fin 11),
      (SimpleGraph.strongPower (SimpleGraph.cycleGraph 11) 213).IsIndepSet ↑S ∧ S.card = 15575655426175670262980356243306221873167074980689569793363838130479999529429857666850517103134244772329978664731663687319144867678577766570404657587474324 :=
  C11R5D213.exists_code

theorem R5_scope_capacity_213 : (5.295514953483263 : ℝ) ≤
    shannonCapacity (SimpleGraph.cycleGraph 11) := C11R5D213.capacity_lower

theorem R5_scope_bracket_213 :
    (5295514953483263 : ℝ) / 1000000000000000 ≤ (15575655426175670262980356243306221873167074980689569793363838130479999529429857666850517103134244772329978664731663687319144867678577766570404657587474324 : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) ∧
    (15575655426175670262980356243306221873167074980689569793363838130479999529429857666850517103134244772329978664731663687319144867678577766570404657587474324 : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) < (5295514953483264 : ℝ) / 1000000000000000 :=
  C11R5D213.root_bracket

theorem R5_scope_comparison_213_BPZ_207 :
    (705688158939417766083006128695703821080101605304173623991920300506716846627203440324635068341693109509608786929844839653207121849017872676157797788816 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (15575655426175670262980356243306221873167074980689569793363838130479999529429857666850517103134244772329978664731663687319144867678577766570404657587474324 : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) := C11R5D213.strict_root_BPZ_207

theorem R5_scope_comparison_213_R3_207 :
    (705692619930489413584189552943991443716392885026759451863953624242911159057444856108323516589876967077721069272782760798453832061060020786354479288616 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (15575655426175670262980356243306221873167074980689569793363838130479999529429857666850517103134244772329978664731663687319144867678577766570404657587474324 : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) := C11R5D213.strict_root_R3_207

theorem R5_scope_comparison_213_R4_201 :
    (32002673683286069537407802496635290542708504485557757541357004314290758191808590819113831084345541929742202157575979409830403540320810360987701516 : ℝ) ^ ((1 : ℝ) / (201 : ℕ)) <
    (15575655426175670262980356243306221873167074980689569793363838130479999529429857666850517103134244772329978664731663687319144867678577766570404657587474324 : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) := C11R5D213.strict_root_R4_201

theorem R5_scope_comparison_213_R4_210 :
    (104801829423661587743253299322841646006536831006849180624356444952325998520513365767989569418211784335842097686417867068684116769869616301057472136612714 : ℝ) ^ ((1 : ℝ) / (210 : ℕ)) <
    (15575655426175670262980356243306221873167074980689569793363838130479999529429857666850517103134244772329978664731663687319144867678577766570404657587474324 : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) := C11R5D213.strict_root_R4_210

#check R5_scope_set_186
#check R5_scope_capacity_186
#check R5_scope_bracket_186
#check R5_scope_comparison_186_BPZ_207
#check R5_scope_comparison_186_R3_207
#check R5_scope_comparison_186_R4_201
#check R5_scope_comparison_186_R4_210
#check R5_scope_set_198
#check R5_scope_capacity_198
#check R5_scope_bracket_198
#check R5_scope_comparison_198_BPZ_207
#check R5_scope_comparison_198_R3_207
#check R5_scope_comparison_198_R4_201
#check R5_scope_comparison_198_R4_210
#check R5_scope_set_213
#check R5_scope_capacity_213
#check R5_scope_bracket_213
#check R5_scope_comparison_213_BPZ_207
#check R5_scope_comparison_213_R3_207
#check R5_scope_comparison_213_R4_201
#check R5_scope_comparison_213_R4_210

#print axioms ShannonBounds.C11R5Common.root_lt_of_cross_power
#print axioms ShannonBounds.C11R5Common.root_lt_decimal
#print axioms ShannonBounds.C11R5Tables.S_0058d965adce02f4
#print axioms ShannonBounds.C11R5Tables.S_01f11d8929277edb
#print axioms ShannonBounds.C11R5Tables.S_04339297651c9c49
#print axioms ShannonBounds.C11R5Tables.S_0ac0bf4804630912
#print axioms ShannonBounds.C11R5Tables.S_0c7cb632d1153343
#print axioms ShannonBounds.C11R5Tables.S_15769811f129f696
#print axioms ShannonBounds.C11R5Tables.S_18277b0c484b4c41
#print axioms ShannonBounds.C11R5Tables.S_313b085cba4d0ce6
#print axioms ShannonBounds.C11R5Tables.S_31d500a381a04d9a
#print axioms ShannonBounds.C11R5Tables.S_36518f191584a644
#print axioms ShannonBounds.C11R5Tables.S_3b145410351af05c
#print axioms ShannonBounds.C11R5Tables.S_3daf90758a80fbb9
#print axioms ShannonBounds.C11R5Tables.S_3e8694d6a5bfe173
#print axioms ShannonBounds.C11R5Tables.S_59b3ea5954777333
#print axioms ShannonBounds.C11R5Tables.S_6356700cb05251b5
#print axioms ShannonBounds.C11R5Tables.S_660b0244997e1b9c
#print axioms ShannonBounds.C11R5Tables.S_6859b0ec25991d42
#print axioms ShannonBounds.C11R5Tables.S_77a9709d00257692
#print axioms ShannonBounds.C11R5Tables.S_787c56f586779bfd
#print axioms ShannonBounds.C11R5Tables.S_7b6c163f0dc4b608
#print axioms ShannonBounds.C11R5Tables.S_a41106e52a48b9a6
#print axioms ShannonBounds.C11R5Tables.S_adfa0199080b0c49
#print axioms ShannonBounds.C11R5Tables.S_b014d29111062762
#print axioms ShannonBounds.C11R5Tables.S_cc0e5d2202d76d5d
#print axioms ShannonBounds.C11R5Tables.S_cd41b86686c50a10
#print axioms ShannonBounds.C11R5Tables.S_cfb0e1863855bcb0
#print axioms ShannonBounds.C11R5Tables.S_e620baced0654ce9
#print axioms ShannonBounds.C11R5Tables.S_e788020168e26abb
#print axioms ShannonBounds.C11R5Tables.S_e9ef2871c79d62be
#print axioms ShannonBounds.C11R5Tables.S_f509c81899188c6f
#print axioms ShannonBounds.C11R5Tables.S_f621e9dcab9f974c
#print axioms ShannonBounds.C11R5Tables.S_f97d79adc1a9e27c
#print axioms ShannonBounds.C11R5D186.card_codeBase
#print axioms ShannonBounds.C11R5D186.card_code
#print axioms ShannonBounds.C11R5D186.independent_code
#print axioms ShannonBounds.C11R5D186.exists_code
#print axioms ShannonBounds.C11R5D186.alpha_ge
#print axioms ShannonBounds.C11R5D186.capacity_root
#print axioms ShannonBounds.C11R5D186.root_bracket
#print axioms ShannonBounds.C11R5D186.capacity_lower
#print axioms ShannonBounds.C11R5D186.step_v
#print axioms ShannonBounds.C11R5D186.step_n1
#print axioms ShannonBounds.C11R5D186.step_n2
#print axioms ShannonBounds.C11R5D186.step_n3
#print axioms ShannonBounds.C11R5D186.step_n4
#print axioms ShannonBounds.C11R5D186.step_n5
#print axioms ShannonBounds.C11R5D186.step_n6
#print axioms ShannonBounds.C11R5D186.step_n7
#print axioms ShannonBounds.C11R5D186.step_n8
#print axioms ShannonBounds.C11R5D186.step_n9
#print axioms ShannonBounds.C11R5D186.step_n10
#print axioms ShannonBounds.C11R5D186.step_n11
#print axioms ShannonBounds.C11R5D186.step_n12
#print axioms ShannonBounds.C11R5D186.step_n13
#print axioms ShannonBounds.C11R5D186.step_n14
#print axioms ShannonBounds.C11R5D186.step_n15
#print axioms ShannonBounds.C11R5D186.step_n16
#print axioms ShannonBounds.C11R5D186.step_n17
#print axioms ShannonBounds.C11R5D186.step_n18
#print axioms ShannonBounds.C11R5D186.step_n19
#print axioms ShannonBounds.C11R5D186.step_n20
#print axioms ShannonBounds.C11R5D186.step_n21
#print axioms ShannonBounds.C11R5D186.step_n22
#print axioms ShannonBounds.C11R5D186.step_n23
#print axioms ShannonBounds.C11R5D186.step_n24
#print axioms ShannonBounds.C11R5D186.step_n25
#print axioms ShannonBounds.C11R5D186.step_n26
#print axioms ShannonBounds.C11R5D186.cross_power_BPZ_207
#print axioms ShannonBounds.C11R5D186.strict_root_BPZ_207
#print axioms ShannonBounds.C11R5D186.cross_power_R3_207
#print axioms ShannonBounds.C11R5D186.strict_root_R3_207
#print axioms ShannonBounds.C11R5D186.cross_power_R4_201
#print axioms ShannonBounds.C11R5D186.strict_root_R4_201
#print axioms ShannonBounds.C11R5D186.cross_power_R4_210
#print axioms ShannonBounds.C11R5D186.strict_root_R4_210
#print axioms ShannonBounds.C11R5D198.card_codeBase
#print axioms ShannonBounds.C11R5D198.card_code
#print axioms ShannonBounds.C11R5D198.independent_code
#print axioms ShannonBounds.C11R5D198.exists_code
#print axioms ShannonBounds.C11R5D198.alpha_ge
#print axioms ShannonBounds.C11R5D198.capacity_root
#print axioms ShannonBounds.C11R5D198.root_bracket
#print axioms ShannonBounds.C11R5D198.capacity_lower
#print axioms ShannonBounds.C11R5D198.step_v
#print axioms ShannonBounds.C11R5D198.step_n1
#print axioms ShannonBounds.C11R5D198.step_n2
#print axioms ShannonBounds.C11R5D198.step_n3
#print axioms ShannonBounds.C11R5D198.step_n4
#print axioms ShannonBounds.C11R5D198.step_n5
#print axioms ShannonBounds.C11R5D198.step_n6
#print axioms ShannonBounds.C11R5D198.step_n7
#print axioms ShannonBounds.C11R5D198.step_n8
#print axioms ShannonBounds.C11R5D198.step_n9
#print axioms ShannonBounds.C11R5D198.step_n10
#print axioms ShannonBounds.C11R5D198.step_n11
#print axioms ShannonBounds.C11R5D198.step_n12
#print axioms ShannonBounds.C11R5D198.step_n13
#print axioms ShannonBounds.C11R5D198.step_n14
#print axioms ShannonBounds.C11R5D198.step_n15
#print axioms ShannonBounds.C11R5D198.step_n16
#print axioms ShannonBounds.C11R5D198.step_n17
#print axioms ShannonBounds.C11R5D198.step_n18
#print axioms ShannonBounds.C11R5D198.step_n19
#print axioms ShannonBounds.C11R5D198.step_n20
#print axioms ShannonBounds.C11R5D198.step_n21
#print axioms ShannonBounds.C11R5D198.step_n22
#print axioms ShannonBounds.C11R5D198.step_n23
#print axioms ShannonBounds.C11R5D198.step_n24
#print axioms ShannonBounds.C11R5D198.step_n25
#print axioms ShannonBounds.C11R5D198.step_n26
#print axioms ShannonBounds.C11R5D198.step_n27
#print axioms ShannonBounds.C11R5D198.step_n28
#print axioms ShannonBounds.C11R5D198.step_n29
#print axioms ShannonBounds.C11R5D198.cross_power_BPZ_207
#print axioms ShannonBounds.C11R5D198.strict_root_BPZ_207
#print axioms ShannonBounds.C11R5D198.cross_power_R3_207
#print axioms ShannonBounds.C11R5D198.strict_root_R3_207
#print axioms ShannonBounds.C11R5D198.cross_power_R4_201
#print axioms ShannonBounds.C11R5D198.strict_root_R4_201
#print axioms ShannonBounds.C11R5D198.cross_power_R4_210
#print axioms ShannonBounds.C11R5D198.strict_root_R4_210
#print axioms ShannonBounds.C11R5D213.card_codeBase
#print axioms ShannonBounds.C11R5D213.card_code
#print axioms ShannonBounds.C11R5D213.independent_code
#print axioms ShannonBounds.C11R5D213.exists_code
#print axioms ShannonBounds.C11R5D213.alpha_ge
#print axioms ShannonBounds.C11R5D213.capacity_root
#print axioms ShannonBounds.C11R5D213.root_bracket
#print axioms ShannonBounds.C11R5D213.capacity_lower
#print axioms ShannonBounds.C11R5D213.step_v
#print axioms ShannonBounds.C11R5D213.step_n1
#print axioms ShannonBounds.C11R5D213.step_n2
#print axioms ShannonBounds.C11R5D213.step_n3
#print axioms ShannonBounds.C11R5D213.step_n4
#print axioms ShannonBounds.C11R5D213.step_n5
#print axioms ShannonBounds.C11R5D213.step_n6
#print axioms ShannonBounds.C11R5D213.step_n7
#print axioms ShannonBounds.C11R5D213.step_n8
#print axioms ShannonBounds.C11R5D213.step_n9
#print axioms ShannonBounds.C11R5D213.step_n10
#print axioms ShannonBounds.C11R5D213.step_n11
#print axioms ShannonBounds.C11R5D213.step_n12
#print axioms ShannonBounds.C11R5D213.step_n13
#print axioms ShannonBounds.C11R5D213.step_n14
#print axioms ShannonBounds.C11R5D213.step_n15
#print axioms ShannonBounds.C11R5D213.step_n16
#print axioms ShannonBounds.C11R5D213.step_n17
#print axioms ShannonBounds.C11R5D213.step_n18
#print axioms ShannonBounds.C11R5D213.step_n19
#print axioms ShannonBounds.C11R5D213.step_n20
#print axioms ShannonBounds.C11R5D213.step_n21
#print axioms ShannonBounds.C11R5D213.step_n22
#print axioms ShannonBounds.C11R5D213.step_n23
#print axioms ShannonBounds.C11R5D213.step_n24
#print axioms ShannonBounds.C11R5D213.step_n25
#print axioms ShannonBounds.C11R5D213.step_n26
#print axioms ShannonBounds.C11R5D213.step_n27
#print axioms ShannonBounds.C11R5D213.step_n28
#print axioms ShannonBounds.C11R5D213.step_n29
#print axioms ShannonBounds.C11R5D213.step_n30
#print axioms ShannonBounds.C11R5D213.cross_power_BPZ_207
#print axioms ShannonBounds.C11R5D213.strict_root_BPZ_207
#print axioms ShannonBounds.C11R5D213.cross_power_R3_207
#print axioms ShannonBounds.C11R5D213.strict_root_R3_207
#print axioms ShannonBounds.C11R5D213.cross_power_R4_201
#print axioms ShannonBounds.C11R5D213.strict_root_R4_201
#print axioms ShannonBounds.C11R5D213.cross_power_R4_210
#print axioms ShannonBounds.C11R5D213.strict_root_R4_210
#print axioms R5_scope_set_186
#print axioms R5_scope_capacity_186
#print axioms R5_scope_bracket_186
#print axioms R5_scope_comparison_186_BPZ_207
#print axioms R5_scope_comparison_186_R3_207
#print axioms R5_scope_comparison_186_R4_201
#print axioms R5_scope_comparison_186_R4_210
#print axioms R5_scope_set_198
#print axioms R5_scope_capacity_198
#print axioms R5_scope_bracket_198
#print axioms R5_scope_comparison_198_BPZ_207
#print axioms R5_scope_comparison_198_R3_207
#print axioms R5_scope_comparison_198_R4_201
#print axioms R5_scope_comparison_198_R4_210
#print axioms R5_scope_set_213
#print axioms R5_scope_capacity_213
#print axioms R5_scope_bracket_213
#print axioms R5_scope_comparison_213_BPZ_207
#print axioms R5_scope_comparison_213_R3_207
#print axioms R5_scope_comparison_213_R4_201
#print axioms R5_scope_comparison_213_R4_210
