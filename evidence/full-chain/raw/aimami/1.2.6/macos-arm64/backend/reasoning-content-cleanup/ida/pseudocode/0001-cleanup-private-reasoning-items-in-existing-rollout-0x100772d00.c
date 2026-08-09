// 函数: codexmate_lib::core::relay::codex_thread_visibility::cleanup_private_reasoning_items_in_existing_rollout
// 地址: 0x100772d00  大小: 0xd75 (3445B)  has_type=true
// 来源: mac arm64 (AiMaMi 1.2.6, 符号化构建) 活体 IDB 反编译, 无截断标记 (红线20核验通过)
// 角色: 单个 rollout 文件的"就地清理"顶层入口 —— 原子替换写入 (temp file + rename),
//        失败路径回滚删除 temp 文件, 通过 mtime 比对防止并发竞争覆盖.
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::cleanup_private_reasoning_items_in_existing_rollout::ha9e80209463bf41a(
        _QWORD *a1,
        void *a2,
        size_t a3,
        __m128i inserted)
{
  __int64 result; // rax
  unsigned __int64 v7; // r13
  __int64 v8; // r15
  int v9; // r14d
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char v12; // r14
  __m128i si128; // xmm2
  __m128i v14; // xmm3
  __m128i v15; // xmm4
  __m128i v16; // xmm5
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rsi
  const __m128i *v20; // rdi
  __m128i v21; // xmm1
  __m128i v22; // xmm1
  unsigned __int64 v23; // r14
  unsigned int v24; // r12d
  __int64 *v25; // r14
  void *v26; // r15
  void *v27; // rdi
  size_t v28; // r14
  size_t v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  char *v33; // rax
  __int64 v34; // rcx
  void *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r15
  int v39; // r13d
  int v40; // r14d
  __int64 *v41; // r12
  __int64 v42; // rax
  __int64 v43; // rax
  size_t v44; // rsi
  __int64 v45; // rdi
  void *v46; // rax
  signed __int64 v47; // r14
  _BYTE v48[24]; // [rsp+8h] [rbp-378h] BYREF
  void **v49; // [rsp+20h] [rbp-360h] BYREF
  _QWORD v50[17]; // [rsp+28h] [rbp-358h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-2D0h] BYREF
  unsigned __int64 v52; // [rsp+B8h] [rbp-2C8h]
  __m128i v53; // [rsp+C0h] [rbp-2C0h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-2B0h]
  __int64 v55; // [rsp+D8h] [rbp-2A8h]
  __int64 v56; // [rsp+E0h] [rbp-2A0h]
  __int64 v57; // [rsp+E8h] [rbp-298h]
  __int64 v58; // [rsp+F0h] [rbp-290h]
  __int64 v59; // [rsp+F8h] [rbp-288h]
  __int64 v60; // [rsp+100h] [rbp-280h]
  __int64 v61; // [rsp+108h] [rbp-278h]
  unsigned __int64 v62; // [rsp+110h] [rbp-270h] BYREF
  __m128i v63; // [rsp+118h] [rbp-268h] BYREF
  _QWORD v64[2]; // [rsp+128h] [rbp-258h] BYREF
  __int64 *v65; // [rsp+138h] [rbp-248h] BYREF
  size_t v66; // [rsp+140h] [rbp-240h]
  __int64 v67; // [rsp+148h] [rbp-238h]
  __int64 v68; // [rsp+150h] [rbp-230h]
  __int64 v69; // [rsp+158h] [rbp-228h]
  __int64 v70; // [rsp+160h] [rbp-220h]
  __int64 v71; // [rsp+168h] [rbp-218h]
  __int64 *v72; // [rsp+170h] [rbp-210h]
  __int64 v73; // [rsp+178h] [rbp-208h] BYREF
  __int64 v74; // [rsp+180h] [rbp-200h]
  __int64 v75; // [rsp+188h] [rbp-1F8h]
  __int64 v76; // [rsp+190h] [rbp-1F0h]
  __int64 v77; // [rsp+198h] [rbp-1E8h]
  __int64 v78; // [rsp+1A0h] [rbp-1E0h]
  __int64 v79; // [rsp+1A8h] [rbp-1D8h]
  __int64 v80; // [rsp+1B0h] [rbp-1D0h]
  __int64 v81; // [rsp+1B8h] [rbp-1C8h]
  __int64 *v82; // [rsp+1C0h] [rbp-1C0h]
  _BYTE v83[96]; // [rsp+1C8h] [rbp-1B8h] BYREF
  __int64 v84; // [rsp+228h] [rbp-158h]
  __int64 v85; // [rsp+230h] [rbp-150h]
  __int64 v86; // [rsp+238h] [rbp-148h]
  __int64 v87; // [rsp+240h] [rbp-140h]
  __int64 v88; // [rsp+248h] [rbp-138h]
  __int64 v89; // [rsp+250h] [rbp-130h]
  __int64 v90; // [rsp+258h] [rbp-128h] BYREF
  __int64 v91; // [rsp+260h] [rbp-120h]
  __int64 v92; // [rsp+268h] [rbp-118h]
  unsigned int v93; // [rsp+274h] [rbp-10Ch]
  unsigned __int64 v94; // [rsp+278h] [rbp-108h] BYREF
  __m128i v95; // [rsp+280h] [rbp-100h] BYREF
  __int64 *v96; // [rsp+290h] [rbp-F0h] BYREF
  unsigned __int64 v97; // [rsp+298h] [rbp-E8h]
  _QWORD v98[11]; // [rsp+2A0h] [rbp-E0h] BYREF
  __int64 v99; // [rsp+2F8h] [rbp-88h]
  __int64 v100; // [rsp+300h] [rbp-80h]
  __int64 v101; // [rsp+308h] [rbp-78h]
  __int64 v102; // [rsp+310h] [rbp-70h]
  __int64 v103; // [rsp+318h] [rbp-68h]
  __int64 v104; // [rsp+320h] [rbp-60h]
  __int64 v105; // [rsp+328h] [rbp-58h] BYREF
  void *__src; // [rsp+330h] [rbp-50h]
  size_t __n; // [rsp+338h] [rbp-48h]
  unsigned int v108; // [rsp+344h] [rbp-3Ch] BYREF
  size_t v109; // [rsp+348h] [rbp-38h]
  void *v110; // [rsp+350h] [rbp-30h]

  a1[3] = 0; /*0x100772d1d*/
  a1[2] = 0; /*0x100772d25*/
  a1[1] = 0; /*0x100772d2d*/
  *a1 = 0; /*0x100772d35*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v96, a2, a3); /*0x100772d43*/
  if ( (_DWORD)v96 == 1 ) /*0x100772d56*/
    return core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9cabf27c050b892b( /*0x100772d6e*/
             1,
             v97);
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9cabf27c050b892b( /*0x100772d75*/
    0,
    v97);
  *(_DWORD *)v83 = 0; /*0x100772d7a*/
  *(_WORD *)&v83[4] = 438; /*0x100772d84*/
  *(_DWORD *)&v83[6] = 1; /*0x100772d8d*/
  *(_WORD *)&v83[10] = 0; /*0x100772d97*/
  v110 = a2; /*0x100772db5*/
  v109 = a3; /*0x100772dbc*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(&v96, v83, a2, a3); /*0x100772dc3*/
  if ( (_DWORD)v96 == 1 ) /*0x100772dcf*/
  {
    v7 = v97; /*0x100772dd1*/
    v8 = 2; /*0x100772dd8*/
LABEL_23:
    v23 = v7 >> 8; /*0x100772f9f*/
    goto LABEL_24; /*0x100772fa2*/
  }
  v9 = HIDWORD(v96); /*0x100772de3*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v96, v83); /*0x100772dea*/
  v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x2000, 1); /*0x100772df9*/
  if ( !v10 ) /*0x100772e01*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 0x2000); /*0x100773a4e*/
  v96 = (__int64 *)v10; /*0x100772e07*/
  v97 = 0x2000; /*0x100772e0e*/
  memset(v98, 0, 24); /*0x100772e19*/
  LODWORD(v98[3]) = v9; /*0x100772e3a*/
  *(_QWORD *)v83 = 0; /*0x100772e41*/
  *(_QWORD *)&v83[8] = 1; /*0x100772e4c*/
  v8 = 11; /*0x100772e5e*/
  do /*0x100772ec7*/
  {
LABEL_7:
    *(_QWORD *)&v83[16] = 0; /*0x100772e64*/
    v12 = std::io::read_until::h65637276fc79ee2d(&v96, 10, v83); /*0x100772e83*/
    v7 = v11; /*0x100772e86*/
    if ( (v12 & 1) != 0 ) /*0x100772e8d*/
    {
      v8 = 2; /*0x1007732e8*/
      goto LABEL_18; /*0x1007732ee*/
    }
    if ( !v11 ) /*0x100772e96*/
    {
      v7 = 0; /*0x1007732f3*/
      goto LABEL_18; /*0x1007732f6*/
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_1016EEE40); /*0x100772ea7*/
    v14 = _mm_cvtsi32_si128(0x2267u); /*0x100772eaf*/
    v15 = _mm_load_si128((const __m128i *)&xmmword_10165AC10); /*0x100772eb7*/
    v16 = _mm_load_si128((const __m128i *)&xmmword_10165AC20); /*0x100772ebf*/
  }
  while ( *(_QWORD *)&v83[16] < 0x12u ); /*0x100772ec7*/
  v17 = *(_QWORD *)&v83[8]; /*0x100772ec9*/
  v18 = *(_QWORD *)&v83[16] + 1LL; /*0x100772ed0*/
  v19 = *(_QWORD *)&v83[16] + 1LL; /*0x100772ed4*/
  v20 = *(const __m128i **)&v83[8]; /*0x100772ed7*/
  while ( 1 ) /*0x100772ee4*/
  {
    inserted = _mm_xor_si128(_mm_loadu_si128(v20), si128); /*0x100772ee4*/
    v21 = _mm_or_si128(_mm_xor_si128(_mm_cvtsi32_si128(v20[1].u16[0]), v14), inserted); /*0x100772ef6*/
    v7 = 1; /*0x100772efa*/
    if ( _mm_testz_si128(v21, v21) ) /*0x100772f05*/
      break; /*0x100772f05*/
    v20 = (const __m128i *)((char *)v20 + 1); /*0x100772f07*/
    if ( (unsigned __int64)--v19 <= 0x12 ) /*0x100772f11*/
    {
      if ( *(_QWORD *)&v83[16] < 0x1Du ) /*0x100772f17*/
        goto LABEL_7; /*0x100772f17*/
      while ( 1 ) /*0x100772f24*/
      {
        inserted = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v17), v16); /*0x100772f24*/
        v22 = _mm_or_si128(_mm_xor_si128(_mm_loadu_si128((const __m128i *)(v17 + 13)), v15), inserted); /*0x100772f31*/
        if ( _mm_testz_si128(v22, v22) ) /*0x100772f3a*/
          goto LABEL_17; /*0x100772f3a*/
        ++v17; /*0x100772f3c*/
        if ( (unsigned __int64)--v18 < 0x1E ) /*0x100772f46*/
          goto LABEL_7; /*0x100772f46*/
      }
    }
  }
LABEL_17:
  v12 = 0; /*0x100772f4d*/
LABEL_18:
  if ( *(_QWORD *)v83 ) /*0x100772f5a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v83[8], *(_QWORD *)v83, 1); /*0x100772f68*/
  if ( v97 ) /*0x100772f77*/
    *(double *)inserted.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96, v97, 1); /*0x100772f85*/
  close_NOCANCEL(LODWORD(v98[3])); /*0x100772f90*/
  if ( (v12 & 1) != 0 ) /*0x100772f99*/
    goto LABEL_23; /*0x100772f99*/
  if ( (v7 & 1) == 0 ) /*0x10077316a*/
  {
    v23 = 0; /*0x10077319a*/
    LOBYTE(v7) = 0; /*0x10077319d*/
    goto LABEL_32; /*0x10077319d*/
  }
  std::sys::fs::metadata::h32fa16d3052ea535(&v96, v110, v109); /*0x100773173*/
  LOBYTE(v7) = v97; /*0x100773178*/
  if ( (_DWORD)v96 == 1 ) /*0x100773186*/
  {
    v23 = v97 >> 8; /*0x10077318b*/
    v8 = 2; /*0x10077318f*/
    goto LABEL_24; /*0x100773195*/
  }
  qmemcpy(v50, v98, 0x58u); /*0x1007731de*/
  v50[12] = v100; /*0x1007731ec*/
  v50[13] = v101; /*0x1007731f7*/
  v50[14] = v102; /*0x100773202*/
  v50[15] = v103; /*0x10077320d*/
  v50[16] = v104; /*0x100773218*/
  v49 = (void **)v97; /*0x10077321f*/
  v71 = v99; /*0x100773226*/
  v50[11] = v99; /*0x10077322d*/
  std::fs::Metadata::modified::h0e075817eaa8c909(&v96, &v49, *(double *)inserted.i64); /*0x100773245*/
  v24 = v97; /*0x10077324a*/
  v25 = v96; /*0x100773251*/
  if ( (_DWORD)v97 == 1000000000 ) /*0x10077325f*/
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h9b1a1fa253cb5ce1(v96); /*0x100773264*/
  v72 = v25; /*0x100773269*/
  v26 = v110; /*0x100773270*/
  v27 = v110; /*0x100773274*/
  v28 = v109; /*0x100773277*/
  v29 = v109; /*0x10077327b*/
  v30 = std::path::Path::parent::h4c3ac26770731fbb(v110, v109); /*0x10077327e*/
  v81 = v31; /*0x100773283*/
  v95.i64[0] = v30; /*0x10077328a*/
  if ( v30 ) /*0x100773294*/
  {
    v32 = std::path::Path::file_name::hf6c2daad91e50ebf(v26, v28); /*0x10077329c*/
    v93 = v24; /*0x1007732a4*/
    if ( v32 ) /*0x1007732ab*/
    {
      core::str::converts::from_utf8::hb32deb9559450f6e(&v96, v32); /*0x1007732bb*/
      v33 = "rolloutrollout changed while router migration was streaming; retry required"; /*0x1007732c7*/
      if ( !(_BYTE)v96 ) /*0x1007732ce*/
        v33 = (char *)v97; /*0x1007732ce*/
      v34 = 7; /*0x1007732d6*/
      if ( !(_BYTE)v96 ) /*0x1007732db*/
        v34 = v98[0]; /*0x1007732db*/
    }
    else
    {
      v34 = 7; /*0x100773367*/
      v33 = "rolloutrollout changed while router migration was streaming; retry required"; /*0x10077336c*/
    }
    v64[0] = v33; /*0x100773373*/
    v64[1] = v34; /*0x10077337a*/
    LODWORD(v73) = std::process::id::ha72f58ec62264e78(); /*0x100773386*/
    uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v96); /*0x100773393*/
    *(_QWORD *)&v83[8] = v97; /*0x1007733a6*/
    *(_QWORD *)v83 = v96; /*0x1007733ad*/
    v96 = v64; /*0x1007733bb*/
    v97 = (unsigned __int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943; /*0x1007733c9*/
    v98[0] = &v73; /*0x1007733d7*/
    v98[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x1007733e5*/
    v98[2] = v83; /*0x1007733f3*/
    v98[3] = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2; /*0x100773401*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v48, &unk_10186175D, &v96); /*0x100773420*/
    std::path::Path::join::he97001d7aa29e128(&v105, v95.i64[0], v81, v48); /*0x10077343d*/
    // ↑ 临时文件名 = "." + rollout文件名 + "." + uuid_v4 + ".tmp" (格式串 unk_10186175D), 与父目录 join
    *(_DWORD *)v83 = 0; /*0x100773442*/
    *(_WORD *)&v83[4] = 438; /*0x10077344c*/
    *(_DWORD *)&v83[6] = 1; /*0x100773455*/
    *(_WORD *)&v83[10] = 0; /*0x10077345f*/
    std::fs::OpenOptions::_open::h1dad73452047b8aa(&v96, v83, v110, v109); /*0x100773485*/
    if ( (_DWORD)v96 == 1 ) /*0x100773491*/
    {
      LOBYTE(v7) = v97; /*0x100773493*/
      v23 = v97 >> 8; /*0x10077349d*/
    }
    else
    {
      std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h7aba135fb44c9169(&v65, 0x2000, HIDWORD(v96)); /*0x1007734bb*/
      *(_DWORD *)v83 = 0; /*0x1007734c0*/
      *(_WORD *)&v83[4] = 438; /*0x1007734ca*/
      *(_DWORD *)&v83[6] = 256; /*0x1007734d3*/
      *(_WORD *)&v83[10] = 256; /*0x1007734dd*/
      std::fs::OpenOptions::_open::h1dad73452047b8aa(&v96, v83, __src, __n); /*0x10077350a*/
      if ( (_DWORD)v96 != 1 ) /*0x100773516*/
      {
        v108 = HIDWORD(v96); /*0x10077356e*/
        v94 = 0; /*0x100773571*/
        v90 = 0; /*0x10077357c*/
        v91 = 1; /*0x100773587*/
        v92 = 0; /*0x100773592*/
        v96 = &v90; /*0x1007735a4*/
        v97 = (unsigned __int64)&v65; /*0x1007735ab*/
        v98[0] = v110; /*0x1007735b6*/
        v98[1] = v109; /*0x1007735c1*/
        v98[2] = &v94; /*0x1007735cf*/
        v98[3] = &v108; /*0x1007735da*/
        v98[4] = &v105; /*0x1007735e1*/
        v98[5] = &v49; /*0x1007735e8*/
        codexmate_lib::core::relay::codex_thread_visibility::cleanup_private_reasoning_items_in_rollout::_$u7b$$u7b$closure$u7d$$u7d$::h8b568b7bb30200c5( /*0x1007735fd*/
          &v51,
          &v96);
        // ↑ 逐行清理主体见 0002-cleanup-private-reasoning-items-in-rollout-closure-0x100771aa0.c
        close_NOCANCEL(v108); /*0x100773605*/
        v98[3] = v70; /*0x100773611*/
        v98[2] = v69; /*0x10077361f*/
        v98[1] = v68; /*0x10077362d*/
        v98[0] = v67; /*0x10077363b*/
        v97 = v66; /*0x100773650*/
        v96 = v65; /*0x100773657*/
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h79bc0faf0272528a(&v96); /*0x100773665*/
        v8 = v51; /*0x10077366a*/
        if ( v51 == 11 ) /*0x100773675*/
        {
          if ( v94 ) /*0x10077367f*/
          {
            std::sys::fs::metadata::h32fa16d3052ea535(&v96, v110, v109); /*0x100773694*/
            v7 = v97; /*0x100773699*/
            if ( (_BYTE)v96 ) /*0x1007736a7*/
            {
              v8 = 2; /*0x1007736ad*/
            }
            else
            {
              qmemcpy(&v83[8], v98, 0x58u); /*0x100773791*/
              v38 = v99; /*0x100773794*/
              v85 = v100; /*0x10077379f*/
              v86 = v101; /*0x1007737aa*/
              v87 = v102; /*0x1007737b5*/
              v88 = v103; /*0x1007737c0*/
              v89 = v104; /*0x1007737cb*/
              *(_QWORD *)v83 = v97; /*0x1007737d2*/
              v84 = v99; /*0x1007737d9*/
              std::fs::Metadata::modified::h0e075817eaa8c909(&v96, &v49, *(double *)inserted.i64); /*0x1007737ee*/
              v39 = v97; /*0x1007737f3*/
              v82 = v96; /*0x100773801*/
              if ( (_DWORD)v97 == 1000000000 ) /*0x10077380f*/
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h9b1a1fa253cb5ce1(v82); /*0x100773818*/
              std::fs::Metadata::modified::h0e075817eaa8c909(&v96, v83, *(double *)inserted.i64); /*0x10077382b*/
              v40 = v97; /*0x100773830*/
              v41 = v96; /*0x100773837*/
              if ( (_DWORD)v97 == 1000000000 ) /*0x100773845*/
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h9b1a1fa253cb5ce1(v96); /*0x10077384a*/
              // ↑ mtime 前后对比: v38==v71(创建时mtime) && (v39==1000000000(不支持时间戳的平台哨兵) || v40==v39 && v41==v82)
              //    即校验 rollout 文件在整个清理窗口期间未被外部并发修改, 否则视为竞态, 放弃 rename, 走下方"重试所需"错误分支.
              if ( v38 == v71 && (v39 == 1000000000 || v40 == v39 && v40 != 1000000000 && v41 == v82) ) /*0x100773882*/
              {
                v42 = std::sys::fs::rename::h7934e6142c921014(__src, __n, v110, v109); /*0x100773898*/
                // ↑ 原子替换: rename(temp_path, rollout_path)
                if ( !v42 ) /*0x1007738a0*/
                {
                  codexmate_lib::core::relay::codex_thread_visibility::sync_parent_dir::h09ed777cf00917a3( /*0x1007739da*/
                    v95.i64[0],
                    v81);
                  codexmate_lib::core::relay::codex_thread_visibility::restore_rollout_mtime_best_effort::h368213cedd460914( /*0x1007739f4*/
                    v110,
                    v109,
                    v72,
                    v93);
                  v7 = v94; /*0x1007739f9*/
                  if ( v90 ) /*0x100773a0a*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91, v90, 1); /*0x100773a18*/
                  v23 = v7 >> 8; /*0x100773a20*/
                  if ( v105 ) /*0x100773a2b*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v105, 1); /*0x100773a3a*/
                  goto LABEL_32; /*0x100773a3f*/
                }
                v73 = v42; /*0x1007738a6*/
                v43 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, __n); /*0x1007738b5*/
                // ↑ rename 失败: 删除临时文件回滚, 格式化 io::Error 文案返回
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h0c7f70bfee515168(v43); /*0x1007738bd*/
                v96 = &v73; /*0x1007738c9*/
                v97 = (unsigned __int64)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1007738d7*/
                alloc::fmt::format::format_inner::h3c16c74008a310d4(&v62, &unk_101861779, &v96); /*0x1007738f3*/
                v7 = v62; /*0x1007738f8*/
                v95 = _mm_loadu_si128(&v63); /*0x100773907*/
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h9b1a1fa253cb5ce1(v73); /*0x100773916*/
                v8 = 10; /*0x10077391b*/
                inserted = _mm_load_si128(&v95); /*0x100773921*/
              }
              else
              {
                // 竞态检测命中: 放弃写入, 删除临时文件, 返回"rollout changed while private reasoning cleanup was streaming; retry required"
                v44 = __n; /*0x10077392f*/
                v45 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, __n); /*0x100773938*/
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h0c7f70bfee515168(v45); /*0x10077393b*/
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v44); /*0x100773940*/
                v7 = 77; /*0x100773945*/
                v46 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(77, 1); /*0x100773955*/
                if ( !v46 ) /*0x10077395d*/
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 77); /*0x100773a6e*/
                v47 = (signed __int64)v46; /*0x100773963*/
                memcpy(v46, "rollout changed while private reasoning cleanup was streaming; retry required", 0x4Du); /*0x100773975*/
                inserted = _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1016EEE60), v47, 0); /*0x100773982*/
                v8 = 10; /*0x100773989*/
              }
            }
            v23 = v7 >> 8; /*0x100773992*/
          }
          else
          {
            // v94(closure写入的"是否有变更"标志)为0: 无需替换, 直接删除临时文件, 返回 Ok(未变更)
            v37 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, __n); /*0x100773760*/
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h0c7f70bfee515168(v37); /*0x100773768*/
            v8 = 11; /*0x10077376d*/
            v23 = 0; /*0x100773773*/
            LOBYTE(v7) = 0; /*0x100773776*/
          }
        }
        else
        {
          v36 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, __n); /*0x1007736c0*/
          core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h0c7f70bfee515168(v36); /*0x1007736c8*/
          LOBYTE(v7) = v52; /*0x1007736cd*/
          v23 = v52 >> 8; /*0x1007736d7*/
          inserted = _mm_loadu_si128(&v53); /*0x1007736db*/
          v73 = v54; /*0x1007736ea*/
          v74 = v55; /*0x1007736f8*/
          v75 = v56; /*0x100773706*/
          v76 = v57; /*0x100773714*/
          v77 = v58; /*0x100773722*/
          v78 = v59; /*0x100773730*/
          v79 = v60; /*0x10077373e*/
          v80 = v61; /*0x10077374c*/
        }
        if ( v90 ) /*0x1007739a0*/
        {
          v95 = inserted; /*0x1007739b2*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91, v90, 1); /*0x1007739ba*/
          inserted = _mm_load_si128(&v95); /*0x1007739bf*/
        }
        goto LABEL_54; /*0x1007739c7*/
      }
      LOBYTE(v7) = v97; /*0x100773518*/
      v23 = v97 >> 8; /*0x100773522*/
      core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h79bc0faf0272528a(&v65); /*0x10077352d*/
    }
    v8 = 2; /*0x100773532*/
LABEL_54:
    if ( v105 ) /*0x10077353f*/
    {
      v95 = inserted; /*0x10077354e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v105, 1); /*0x100773556*/
      inserted = _mm_load_si128(&v95); /*0x10077355b*/
    }
    goto LABEL_24; /*0x100773563*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v27, v29); /*0x1007732fb*/
  v35 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1); /*0x10077330a*/
  if ( !v35 ) /*0x100773312*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26); /*0x100773a5f*/
  qmemcpy(v35, "rollout path has no parent", 26); /*0x10077333e*/
  inserted = _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1016EEE70), (signed __int64)v35, 0); /*0x100773349*/
  v8 = 9; /*0x100773356*/
  LOBYTE(v7) = 26; /*0x10077335c*/
  v23 = 0; /*0x10077335f*/
LABEL_24:
  if ( (_DWORD)v8 != 11 ) /*0x100772faa*/
  {
    *(_QWORD *)v83 = v8; /*0x100772fb0*/
    v83[9] = v23; /*0x100772fc2*/
    v83[10] = BYTE1(v23); /*0x100772fc2*/
    v83[11] = BYTE2(v23); /*0x100772fc2*/
    v83[12] = BYTE3(v23); /*0x100772fc2*/
    v83[13] = BYTE4(v23); /*0x100772fc2*/
    v83[14] = BYTE5(v23); /*0x100772fc2*/
    v83[15] = BYTE6(v23); /*0x100772fc2*/
    v83[8] = v7; /*0x100772fc2*/
    *(__m128i *)&v83[16] = inserted; /*0x100772fc9*/
    *(_QWORD *)&v83[32] = v73; /*0x100772fdf*/
    *(_QWORD *)&v83[40] = v74; /*0x100772fe6*/
    *(_QWORD *)&v83[48] = v75; /*0x100772ff4*/
    *(_QWORD *)&v83[56] = v76; /*0x100773002*/
    *(_QWORD *)&v83[64] = v77; /*0x100773010*/
    *(_QWORD *)&v83[72] = v78; /*0x10077301e*/
    *(_QWORD *)&v83[80] = v79; /*0x10077302c*/
    *(_QWORD *)&v83[88] = v80; /*0x10077303a*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10077304f*/
    {
      // 出错时按 log crate 记日志, 源码路径锚点: src/core/relay/codex_thread_visibility.rs
      v65 = (__int64 *)v110; /*0x100773059*/
      v66 = v109; /*0x100773064*/
      v49 = (void **)&v65; /*0x100773072*/
      v50[0] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100773080*/
      v50[1] = v83; /*0x10077308e*/
      v50[2] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e; /*0x10077309c*/
      v98[4] = 2; /*0x1007730a3*/
      v98[5] = &anon_3f0cee2931c58d8d540c26f0254bc451_522; /*0x1007730b5*/
      v98[6] = 51; /*0x1007730bc*/
      v98[8] = &unk_101861896; /*0x1007730ce*/
      v98[9] = &v49; /*0x1007730dc*/
      v96 = nullptr; /*0x1007730e3*/
      v97 = (unsigned __int64)&anon_3f0cee2931c58d8d540c26f0254bc451_522; /*0x1007730ee*/
      v98[0] = 51; /*0x1007730f5*/
      v98[1] = 0; /*0x100773100*/
      v98[2] = "src/core/relay/codex_thread_visibility.rs"; /*0x100773112*/
      v98[3] = 41; /*0x100773119*/
      v98[7] = 0x224F00000001LL; /*0x10077312e*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v62, &v96); /*0x100773143*/
    }
    a1[3] = 1; /*0x100773148*/
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v83); /*0x10077315c*/
  }
LABEL_32:
  result = (v23 << 8) | (unsigned __int8)v7; /*0x1007731a0*/
  if ( result ) /*0x1007731ab*/
  {
    a1[1] = 1; /*0x1007731ad*/
    a1[2] = result; /*0x1007731b5*/
  }
  return result; /*0x100772d5d*/
}
