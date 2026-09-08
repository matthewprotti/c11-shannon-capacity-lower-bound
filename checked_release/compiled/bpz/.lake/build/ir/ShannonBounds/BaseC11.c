// Lean compiler output
// Module: ShannonBounds.BaseC11
// Imports: public import Init public meta import Init public import ShannonBounds.BaseC11Data
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
lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_bep___boxed(lean_object*, lean_object*);
extern lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_portsList;
lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_bep(uint8_t, lean_object*);
uint8_t lp_ShannonBounds_ShannonBounds_BaseC11_wconf(lean_object*, lean_object*);
extern lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_Xlist;
lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_bside___boxed(lean_object*);
extern lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_Ilist;
lean_object* l_List_reverse___redArg(lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_List_any___at___00ShannonBounds_BaseC11_fpB_spec__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_any___at___00ShannonBounds_BaseC11_fpB_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_BaseC11_fpB(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_fpB___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_BaseC11_base___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_BaseC11_bep___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_base___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_BaseC11_base___closed__0_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_BaseC11_base___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_BaseC11_bside___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_base___closed__1 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_BaseC11_base___closed__1_value;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_BaseC11_base___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_base___closed__2;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_base;
LEAN_EXPORT lean_object* lp_ShannonBounds_List_filterTR_loop___at___00ShannonBounds_BaseC11_Xc_spec__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_filterTR_loop___at___00ShannonBounds_BaseC11_Xc_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_Xc(uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_Xc___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_List_any___at___00ShannonBounds_BaseC11_fpB_spec__0(uint8_t v_c_1_, lean_object* v_x_2_, lean_object* v_x_3_){
_start:
{
if (lean_obj_tag(v_x_3_) == 0)
{
uint8_t v___x_4_; 
v___x_4_ = 0;
return v___x_4_;
}
else
{
lean_object* v_head_5_; lean_object* v_tail_6_; lean_object* v___x_7_; uint8_t v___x_8_; 
v_head_5_ = lean_ctor_get(v_x_3_, 0);
v_tail_6_ = lean_ctor_get(v_x_3_, 1);
v___x_7_ = lp_ShannonBounds_ShannonBounds_BaseC11_bep(v_c_1_, v_head_5_);
v___x_8_ = lp_ShannonBounds_ShannonBounds_BaseC11_wconf(v_x_2_, v___x_7_);
lean_dec(v___x_7_);
if (v___x_8_ == 0)
{
v_x_3_ = v_tail_6_;
goto _start;
}
else
{
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_any___at___00ShannonBounds_BaseC11_fpB_spec__0___boxed(lean_object* v_c_10_, lean_object* v_x_11_, lean_object* v_x_12_){
_start:
{
uint8_t v_c_boxed_13_; uint8_t v_res_14_; lean_object* v_r_15_; 
v_c_boxed_13_ = lean_unbox(v_c_10_);
v_res_14_ = lp_ShannonBounds_List_any___at___00ShannonBounds_BaseC11_fpB_spec__0(v_c_boxed_13_, v_x_11_, v_x_12_);
lean_dec(v_x_12_);
lean_dec(v_x_11_);
v_r_15_ = lean_box(v_res_14_);
return v_r_15_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_BaseC11_fpB(uint8_t v_c_16_, lean_object* v_x_17_){
_start:
{
lean_object* v___x_18_; uint8_t v___x_19_; 
v___x_18_ = lp_ShannonBounds_ShannonBounds_BaseC11_portsList;
v___x_19_ = lp_ShannonBounds_List_any___at___00ShannonBounds_BaseC11_fpB_spec__0(v_c_16_, v_x_17_, v___x_18_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_fpB___boxed(lean_object* v_c_20_, lean_object* v_x_21_){
_start:
{
uint8_t v_c_boxed_22_; uint8_t v_res_23_; lean_object* v_r_24_; 
v_c_boxed_22_ = lean_unbox(v_c_20_);
v_res_23_ = lp_ShannonBounds_ShannonBounds_BaseC11_fpB(v_c_boxed_22_, v_x_21_);
lean_dec(v_x_21_);
v_r_24_ = lean_box(v_res_23_);
return v_r_24_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_BaseC11_base___closed__2(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_27_ = lp_ShannonBounds_ShannonBounds_BaseC11_Xlist;
v___x_28_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_BaseC11_base___closed__1));
v___x_29_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_BaseC11_base___closed__0));
v___x_30_ = lp_ShannonBounds_ShannonBounds_BaseC11_portsList;
v___x_31_ = lp_ShannonBounds_ShannonBounds_BaseC11_Ilist;
v___x_32_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
lean_ctor_set(v___x_32_, 1, v___x_30_);
lean_ctor_set(v___x_32_, 2, v___x_29_);
lean_ctor_set(v___x_32_, 3, v___x_28_);
lean_ctor_set(v___x_32_, 4, v___x_27_);
return v___x_32_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_BaseC11_base(void){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_BaseC11_base___closed__2, &lp_ShannonBounds_ShannonBounds_BaseC11_base___closed__2_once, _init_lp_ShannonBounds_ShannonBounds_BaseC11_base___closed__2);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_filterTR_loop___at___00ShannonBounds_BaseC11_Xc_spec__0(uint8_t v_c_34_, lean_object* v_a_35_, lean_object* v_a_36_){
_start:
{
if (lean_obj_tag(v_a_35_) == 0)
{
lean_object* v___x_37_; 
v___x_37_ = l_List_reverse___redArg(v_a_36_);
return v___x_37_;
}
else
{
lean_object* v_head_38_; lean_object* v_tail_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_49_; 
v_head_38_ = lean_ctor_get(v_a_35_, 0);
v_tail_39_ = lean_ctor_get(v_a_35_, 1);
v_isSharedCheck_49_ = !lean_is_exclusive(v_a_35_);
if (v_isSharedCheck_49_ == 0)
{
v___x_41_ = v_a_35_;
v_isShared_42_ = v_isSharedCheck_49_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_tail_39_);
lean_inc(v_head_38_);
lean_dec(v_a_35_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_49_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
uint8_t v___x_43_; 
v___x_43_ = lp_ShannonBounds_ShannonBounds_BaseC11_fpB(v_c_34_, v_head_38_);
if (v___x_43_ == 0)
{
lean_del_object(v___x_41_);
lean_dec(v_head_38_);
v_a_35_ = v_tail_39_;
goto _start;
}
else
{
lean_object* v___x_46_; 
if (v_isShared_42_ == 0)
{
lean_ctor_set(v___x_41_, 1, v_a_36_);
v___x_46_ = v___x_41_;
goto v_reusejp_45_;
}
else
{
lean_object* v_reuseFailAlloc_48_; 
v_reuseFailAlloc_48_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_48_, 0, v_head_38_);
lean_ctor_set(v_reuseFailAlloc_48_, 1, v_a_36_);
v___x_46_ = v_reuseFailAlloc_48_;
goto v_reusejp_45_;
}
v_reusejp_45_:
{
v_a_35_ = v_tail_39_;
v_a_36_ = v___x_46_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_filterTR_loop___at___00ShannonBounds_BaseC11_Xc_spec__0___boxed(lean_object* v_c_50_, lean_object* v_a_51_, lean_object* v_a_52_){
_start:
{
uint8_t v_c_boxed_53_; lean_object* v_res_54_; 
v_c_boxed_53_ = lean_unbox(v_c_50_);
v_res_54_ = lp_ShannonBounds_List_filterTR_loop___at___00ShannonBounds_BaseC11_Xc_spec__0(v_c_boxed_53_, v_a_51_, v_a_52_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_Xc(uint8_t v_c_55_){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = lp_ShannonBounds_ShannonBounds_BaseC11_Xlist;
v___x_57_ = lean_box(0);
v___x_58_ = lp_ShannonBounds_List_filterTR_loop___at___00ShannonBounds_BaseC11_Xc_spec__0(v_c_55_, v___x_56_, v___x_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_Xc___boxed(lean_object* v_c_59_){
_start:
{
uint8_t v_c_boxed_60_; lean_object* v_res_61_; 
v_c_boxed_60_ = lean_unbox(v_c_59_);
v_res_61_ = lp_ShannonBounds_ShannonBounds_BaseC11_Xc(v_c_boxed_60_);
return v_res_61_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_ShannonBounds_ShannonBounds_BaseC11Data(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ShannonBounds_ShannonBounds_BaseC11(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ShannonBounds_ShannonBounds_BaseC11Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_ShannonBounds_ShannonBounds_BaseC11_base = _init_lp_ShannonBounds_ShannonBounds_BaseC11_base();
lean_mark_persistent(lp_ShannonBounds_ShannonBounds_BaseC11_base);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
