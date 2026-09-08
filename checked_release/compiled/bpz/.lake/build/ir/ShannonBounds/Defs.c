// Lean compiler output
// Module: ShannonBounds.Defs
// Imports: public import Init public meta import Init public import Mathlib.Analysis.SpecialFunctions.Pow.Real public import Mathlib.Combinatorics.SimpleGraph.Basic public import Mathlib.Combinatorics.SimpleGraph.Maps public import Mathlib.Combinatorics.SimpleGraph.Finite public import Mathlib.Combinatorics.SimpleGraph.Clique public import Mathlib.Data.Real.Basic public import Mathlib.Tactic.Linarith
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_finRange(lean_object*);
uint8_t lp_mathlib_Fintype_decidablePiFintype___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Nat_decidableForallFin___redArg(lean_object*, lean_object*);
lean_object* lp_mathlib_Equiv_prodAssoc(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongProduct(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "ShannonBounds"};
static const lean_object* lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__0_value;
static const lean_string_object lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 7, .m_data = "term_⊠_"};
static const lean_object* lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__1 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__1_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 183, 121, 64, 9, 202, 170, 189)}};
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__2_value_aux_0),((lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(165, 104, 54, 132, 77, 196, 24, 134)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__2 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__2_value;
static const lean_string_object lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__3 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__3_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__4 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__4_value;
static const lean_string_object lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ⊠ "};
static const lean_object* lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__5 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__5_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__5_value)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__6 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__6_value;
static const lean_string_object lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__7 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__7_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__7_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__8 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__8_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__8_value),((lean_object*)(((size_t)(71) << 1) | 1))}};
static const lean_object* lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__9 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__9_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__4_value),((lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__6_value),((lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__9_value)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__10 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__10_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__2_value),((lean_object*)(((size_t)(70) << 1) | 1)),((lean_object*)(((size_t)(70) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__10_value)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__11 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__11_value;
LEAN_EXPORT const lean_object* lp_ShannonBounds_ShannonBounds_term___u22a0__ = (const lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__11_value;
static const lean_string_object lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__0_value;
static const lean_string_object lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__1 = (const lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__1_value;
static const lean_string_object lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__2 = (const lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__2_value;
static const lean_string_object lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__3 = (const lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__3_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__4_value_aux_0),((lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__4_value_aux_1),((lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__4_value_aux_2),((lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__4 = (const lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__4_value;
static const lean_string_object lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "strongProduct"};
static const lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__5 = (const lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__5_value;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__6;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(13, 198, 64, 188, 220, 53, 192, 41)}};
static const lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__7 = (const lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__7_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 183, 121, 64, 9, 202, 170, 189)}};
static const lean_ctor_object lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__8_value_aux_0),((lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(225, 198, 152, 59, 80, 122, 245, 147)}};
static const lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__8 = (const lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__8_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__9 = (const lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__9_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__8_value)}};
static const lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__10 = (const lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__10_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__11 = (const lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__11_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__9_value),((lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__11_value)}};
static const lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__12 = (const lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__12_value;
static const lean_string_object lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__13 = (const lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__13_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__14 = (const lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__14_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______unexpand__ShannonBounds__strongProduct__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______unexpand__ShannonBounds__strongProduct__1___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______unexpand__ShannonBounds__strongProduct__1___closed__0_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______unexpand__ShannonBounds__strongProduct__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______unexpand__ShannonBounds__strongProduct__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______unexpand__ShannonBounds__strongProduct__1___closed__1 = (const lean_object*)&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______unexpand__ShannonBounds__strongProduct__1___closed__1_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______unexpand__ShannonBounds__strongProduct__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______unexpand__ShannonBounds__strongProduct__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_SimpleGraph_strongPower(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_SimpleGraph_strongPower___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_strongProduct__assoc__iso___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_strongProduct__assoc__iso___closed__0;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongProduct__assoc__iso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongProduct(lean_object* v_V_1_, lean_object* v_W_2_, lean_object* v_G_3_, lean_object* v_H_4_){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_box(0);
return v___x_5_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__6(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__5));
v___x_43_ = l_String_toRawSubstring_x27(v___x_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1(lean_object* v_x_63_, lean_object* v_a_64_, lean_object* v_a_65_){
_start:
{
lean_object* v___x_66_; uint8_t v___x_67_; 
v___x_66_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__2));
lean_inc(v_x_63_);
v___x_67_ = l_Lean_Syntax_isOfKind(v_x_63_, v___x_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; 
lean_dec(v_x_63_);
v___x_68_ = lean_box(1);
v___x_69_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v_a_65_);
return v___x_69_;
}
else
{
lean_object* v_quotContext_70_; lean_object* v_currMacroScope_71_; lean_object* v_ref_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; uint8_t v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v_quotContext_70_ = lean_ctor_get(v_a_64_, 1);
v_currMacroScope_71_ = lean_ctor_get(v_a_64_, 2);
v_ref_72_ = lean_ctor_get(v_a_64_, 5);
v___x_73_ = lean_unsigned_to_nat(0u);
v___x_74_ = l_Lean_Syntax_getArg(v_x_63_, v___x_73_);
v___x_75_ = lean_unsigned_to_nat(2u);
v___x_76_ = l_Lean_Syntax_getArg(v_x_63_, v___x_75_);
lean_dec(v_x_63_);
v___x_77_ = 0;
v___x_78_ = l_Lean_SourceInfo_fromRef(v_ref_72_, v___x_77_);
v___x_79_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__4));
v___x_80_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__6, &lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__6_once, _init_lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__6);
v___x_81_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__7));
lean_inc(v_currMacroScope_71_);
lean_inc(v_quotContext_70_);
v___x_82_ = l_Lean_addMacroScope(v_quotContext_70_, v___x_81_, v_currMacroScope_71_);
v___x_83_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__12));
lean_inc_n(v___x_78_, 2);
v___x_84_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_84_, 0, v___x_78_);
lean_ctor_set(v___x_84_, 1, v___x_80_);
lean_ctor_set(v___x_84_, 2, v___x_82_);
lean_ctor_set(v___x_84_, 3, v___x_83_);
v___x_85_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__14));
v___x_86_ = l_Lean_Syntax_node2(v___x_78_, v___x_85_, v___x_74_, v___x_76_);
v___x_87_ = l_Lean_Syntax_node2(v___x_78_, v___x_79_, v___x_84_, v___x_86_);
v___x_88_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
lean_ctor_set(v___x_88_, 1, v_a_65_);
return v___x_88_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___boxed(lean_object* v_x_89_, lean_object* v_a_90_, lean_object* v_a_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1(v_x_89_, v_a_90_, v_a_91_);
lean_dec_ref(v_a_90_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______unexpand__ShannonBounds__strongProduct__1(lean_object* v_x_96_, lean_object* v_a_97_, lean_object* v_a_98_){
_start:
{
lean_object* v___x_99_; uint8_t v___x_100_; 
v___x_99_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______macroRules__ShannonBounds__term___u22a0____1___closed__4));
lean_inc(v_x_96_);
v___x_100_ = l_Lean_Syntax_isOfKind(v_x_96_, v___x_99_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; lean_object* v___x_102_; 
lean_dec(v_x_96_);
v___x_101_ = lean_box(0);
v___x_102_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
lean_ctor_set(v___x_102_, 1, v_a_98_);
return v___x_102_;
}
else
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_103_ = lean_unsigned_to_nat(0u);
v___x_104_ = l_Lean_Syntax_getArg(v_x_96_, v___x_103_);
v___x_105_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______unexpand__ShannonBounds__strongProduct__1___closed__1));
lean_inc(v___x_104_);
v___x_106_ = l_Lean_Syntax_isOfKind(v___x_104_, v___x_105_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; lean_object* v___x_108_; 
lean_dec(v___x_104_);
lean_dec(v_x_96_);
v___x_107_ = lean_box(0);
v___x_108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
lean_ctor_set(v___x_108_, 1, v_a_98_);
return v___x_108_;
}
else
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; uint8_t v___x_112_; 
v___x_109_ = lean_unsigned_to_nat(1u);
v___x_110_ = l_Lean_Syntax_getArg(v_x_96_, v___x_109_);
lean_dec(v_x_96_);
v___x_111_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_110_);
v___x_112_ = l_Lean_Syntax_matchesNull(v___x_110_, v___x_111_);
if (v___x_112_ == 0)
{
lean_object* v___x_113_; lean_object* v___x_114_; 
lean_dec(v___x_110_);
lean_dec(v___x_104_);
v___x_113_ = lean_box(0);
v___x_114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
lean_ctor_set(v___x_114_, 1, v_a_98_);
return v___x_114_;
}
else
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v_ref_117_; uint8_t v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_115_ = l_Lean_Syntax_getArg(v___x_110_, v___x_103_);
v___x_116_ = l_Lean_Syntax_getArg(v___x_110_, v___x_109_);
lean_dec(v___x_110_);
v_ref_117_ = l_Lean_replaceRef(v___x_104_, v_a_97_);
lean_dec(v___x_104_);
v___x_118_ = 0;
v___x_119_ = l_Lean_SourceInfo_fromRef(v_ref_117_, v___x_118_);
lean_dec(v_ref_117_);
v___x_120_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__2));
v___x_121_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_term___u22a0___00__closed__5));
lean_inc(v___x_119_);
v___x_122_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_119_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
v___x_123_ = l_Lean_Syntax_node3(v___x_119_, v___x_120_, v___x_115_, v___x_122_, v___x_116_);
v___x_124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
lean_ctor_set(v___x_124_, 1, v_a_98_);
return v___x_124_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______unexpand__ShannonBounds__strongProduct__1___boxed(lean_object* v_x_125_, lean_object* v_a_126_, lean_object* v_a_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = lp_ShannonBounds_ShannonBounds___aux__ShannonBounds__Defs______unexpand__ShannonBounds__strongProduct__1(v_x_125_, v_a_126_, v_a_127_);
lean_dec(v_a_126_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_SimpleGraph_strongPower(lean_object* v_V_129_, lean_object* v_G_130_, lean_object* v_n_131_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lean_box(0);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_SimpleGraph_strongPower___boxed(lean_object* v_V_133_, lean_object* v_G_134_, lean_object* v_n_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = lp_ShannonBounds_SimpleGraph_strongPower(v_V_133_, v_G_134_, v_n_135_);
lean_dec(v_n_135_);
return v_res_136_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___redArg___lam__0(lean_object* v_inst_137_, lean_object* v_a_138_, lean_object* v___y_139_, lean_object* v___y_140_){
_start:
{
lean_object* v___x_141_; uint8_t v___x_142_; 
v___x_141_ = lean_apply_2(v_inst_137_, v___y_139_, v___y_140_);
v___x_142_ = lean_unbox(v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___redArg___lam__0___boxed(lean_object* v_inst_143_, lean_object* v_a_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
uint8_t v_res_147_; lean_object* v_r_148_; 
v_res_147_ = lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___redArg___lam__0(v_inst_143_, v_a_144_, v___y_145_, v___y_146_);
lean_dec(v_a_144_);
v_r_148_ = lean_box(v_res_147_);
return v_r_148_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___redArg___lam__1(lean_object* v_f_149_, lean_object* v_g_150_, lean_object* v_inst_151_, lean_object* v_inst_152_, lean_object* v_a_153_){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; uint8_t v___x_157_; 
lean_inc(v_a_153_);
v___x_154_ = lean_apply_1(v_f_149_, v_a_153_);
v___x_155_ = lean_apply_1(v_g_150_, v_a_153_);
lean_inc(v___x_155_);
lean_inc(v___x_154_);
v___x_156_ = lean_apply_2(v_inst_151_, v___x_154_, v___x_155_);
v___x_157_ = lean_unbox(v___x_156_);
if (v___x_157_ == 0)
{
lean_object* v___x_158_; uint8_t v___x_159_; 
v___x_158_ = lean_apply_2(v_inst_152_, v___x_154_, v___x_155_);
v___x_159_ = lean_unbox(v___x_158_);
return v___x_159_;
}
else
{
uint8_t v___x_160_; 
lean_dec(v___x_155_);
lean_dec(v___x_154_);
lean_dec_ref(v_inst_152_);
v___x_160_ = lean_unbox(v___x_156_);
return v___x_160_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___redArg___lam__1___boxed(lean_object* v_f_161_, lean_object* v_g_162_, lean_object* v_inst_163_, lean_object* v_inst_164_, lean_object* v_a_165_){
_start:
{
uint8_t v_res_166_; lean_object* v_r_167_; 
v_res_166_ = lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___redArg___lam__1(v_f_161_, v_g_162_, v_inst_163_, v_inst_164_, v_a_165_);
v_r_167_ = lean_box(v_res_166_);
return v_r_167_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___redArg(lean_object* v_inst_168_, lean_object* v_inst_169_, lean_object* v_n_170_, lean_object* v_f_171_, lean_object* v_g_172_){
_start:
{
lean_object* v___f_173_; lean_object* v___x_174_; uint8_t v___x_175_; 
lean_inc_ref(v_inst_168_);
v___f_173_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_173_, 0, v_inst_168_);
lean_inc(v_n_170_);
v___x_174_ = l_List_finRange(v_n_170_);
lean_inc(v_g_172_);
lean_inc(v_f_171_);
v___x_175_ = lp_mathlib_Fintype_decidablePiFintype___redArg(v___f_173_, v___x_174_, v_f_171_, v_g_172_);
if (v___x_175_ == 0)
{
lean_object* v___f_176_; uint8_t v___x_177_; 
v___f_176_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_176_, 0, v_f_171_);
lean_closure_set(v___f_176_, 1, v_g_172_);
lean_closure_set(v___f_176_, 2, v_inst_168_);
lean_closure_set(v___f_176_, 3, v_inst_169_);
v___x_177_ = l_Nat_decidableForallFin___redArg(v_n_170_, v___f_176_);
return v___x_177_;
}
else
{
uint8_t v___x_178_; 
lean_dec(v_g_172_);
lean_dec(v_f_171_);
lean_dec(v_n_170_);
lean_dec_ref(v_inst_169_);
lean_dec_ref(v_inst_168_);
v___x_178_ = 0;
return v___x_178_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___redArg___boxed(lean_object* v_inst_179_, lean_object* v_inst_180_, lean_object* v_n_181_, lean_object* v_f_182_, lean_object* v_g_183_){
_start:
{
uint8_t v_res_184_; lean_object* v_r_185_; 
v_res_184_ = lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___redArg(v_inst_179_, v_inst_180_, v_n_181_, v_f_182_, v_g_183_);
v_r_185_ = lean_box(v_res_184_);
return v_r_185_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable(lean_object* v_V_186_, lean_object* v_inst_187_, lean_object* v_G_188_, lean_object* v_inst_189_, lean_object* v_n_190_, lean_object* v_f_191_, lean_object* v_g_192_){
_start:
{
uint8_t v___x_193_; 
v___x_193_ = lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___redArg(v_inst_187_, v_inst_189_, v_n_190_, v_f_191_, v_g_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___boxed(lean_object* v_V_194_, lean_object* v_inst_195_, lean_object* v_G_196_, lean_object* v_inst_197_, lean_object* v_n_198_, lean_object* v_f_199_, lean_object* v_g_200_){
_start:
{
uint8_t v_res_201_; lean_object* v_r_202_; 
v_res_201_ = lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable(v_V_194_, v_inst_195_, v_G_196_, v_inst_197_, v_n_198_, v_f_199_, v_g_200_);
v_r_202_ = lean_box(v_res_201_);
return v_r_202_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_strongProduct__assoc__iso___closed__0(void){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = lp_mathlib_Equiv_prodAssoc(lean_box(0), lean_box(0), lean_box(0));
return v___x_203_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongProduct__assoc__iso(lean_object* v_U_204_, lean_object* v_V_205_, lean_object* v_W_206_, lean_object* v_A_207_, lean_object* v_B_208_, lean_object* v_C_209_){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_strongProduct__assoc__iso___closed__0, &lp_ShannonBounds_ShannonBounds_strongProduct__assoc__iso___closed__0_once, _init_lp_ShannonBounds_ShannonBounds_strongProduct__assoc__iso___closed__0);
return v___x_210_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Analysis_SpecialFunctions_Pow_Real(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Combinatorics_SimpleGraph_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Combinatorics_SimpleGraph_Maps(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Combinatorics_SimpleGraph_Finite(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Combinatorics_SimpleGraph_Clique(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Real_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Tactic_Linarith(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ShannonBounds_ShannonBounds_Defs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Analysis_SpecialFunctions_Pow_Real(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Combinatorics_SimpleGraph_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Combinatorics_SimpleGraph_Maps(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Combinatorics_SimpleGraph_Finite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Combinatorics_SimpleGraph_Clique(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Real_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Tactic_Linarith(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
