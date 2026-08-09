// codexmate_lib::core::relay::codex_diagnostic::native_off_openai_model_needs_fallback::h50928f7856ab95cc
// EA 0x100b28230, size 860B (0x35c), macOS, AiMaMi 1.2.6
// 完整反编译，无截断（红线20核验：decompile() code 字段长度 7367 字符，无截断标记）。
//
// 修复记录：此前同名文件是手写摘要/删节稿（伪代码用大量中文自然语言描述替代真实指令，
// 覆盖率估算仅约9-48%）。本次重新调用 decompile() 工具直接获取真实逐行伪代码。
// changelog-item-4证据: native_off_openai_model_needs_fallback — 判定条件:tag==6 且 provider字符串大小写不敏感匹配"openai"(6字节) 且 native_off计数器==0，再对trim后的model名做两次HashSet(SIMD分组)成员测试(长度12/>12特征串)，决定是否需要fallback
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::native_off_openai_model_needs_fallback::h50928f7856ab95cc(
        _QWORD *a1,
        __int64 *a2,
        unsigned __int64 a3)
{
  _BYTE *v3; // rax
  unsigned int v4; // r14d
  char *v6; // rax
  unsigned __int64 v7; // rdx
  size_t v8; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rsi
  __m128i v14; // xmm1
  __int64 v15; // rdi
  __m128i v16; // xmm2
  unsigned __int64 v17; // rax
  __m128i v18; // xmm3
  int v20; // eax
  bool v21; // zf
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rax
  __int64 v26; // r12
  __int64 v27; // r13
  __m128i v28; // xmm1
  __int64 v29; // rdx
  __m128i v30; // xmm2
  unsigned __int64 v31; // rax
  __m128i v32; // xmm3
  int v34; // eax
  __m128i v35; // [rsp+0h] [rbp-80h] BYREF
  __m128i v36; // [rsp+10h] [rbp-70h] BYREF
  __m128i v37; // [rsp+20h] [rbp-60h] BYREF
  __m128i v38; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-38h]
  void *__s1; // [rsp+50h] [rbp-30h]

  if ( a1[8] != 6 ) /*0x100b28246*/
    return 0; /*0x100b28246*/
  v3 = (_BYTE *)a1[7]; /*0x100b2824c*/
  if ( (*v3 | (unsigned __int8)(32 * ((unsigned __int8)(*v3 - 65) < 0x1Au))) != 111 /*0x100b282ea*/
    || (v3[1] | (unsigned __int8)(32 * ((unsigned __int8)(v3[1] - 65) < 0x1Au))) != 112
    || (v3[2] | (unsigned __int8)(32 * ((unsigned __int8)(v3[2] - 65) < 0x1Au))) != 101
    || (v3[3] | (unsigned __int8)(32 * ((unsigned __int8)(v3[3] - 65) < 0x1Au))) != 110
    || (v3[4] | (unsigned __int8)(32 * ((unsigned __int8)(v3[4] - 65) < 0x1Au))) != 97 )
  {
    return 0; /*0x100b282ea*/
  }
  v4 = 0; /*0x100b282fe*/
  if ( (v3[5] | (unsigned __int8)(32 * ((unsigned __int8)(v3[5] - 65) < 0x1Au))) == 105 && !__OFSUB__(-a1[15], 1) ) /*0x100b2830d*/
  {
    v4 = (unsigned int)a2; /*0x100b2830f*/
    v6 = (char *)core::str::_$LT$impl$u20$str$GT$::trim_matches::haf0d9a3a47c0fad9(a1[16], a1[17]); /*0x100b28326*/
    v8 = v7; /*0x100b2832b*/
    if ( v6 == nullptr || v7 == 0 ) /*0x100b28337*/
      return 0; /*0x100b2833e*/
    _RCX = a3; /*0x100b28357*/
    if ( v7 == 12 ) /*0x100b2835a*/
    {
      if ( !(anon_597a1ab5dc54f5a7c7ef0ba6972bc544_284 ^ *(_QWORD *)v6 | *((_DWORD *)v6 + 2) ^ 0x79616C65u) ) /*0x100b2836f*/
      {
LABEL_36:
        LOBYTE(v4) = 1; /*0x100b28584*/
        return v4; /*0x100b28587*/
      }
    }
    else if ( v7 > 0xC /*0x100b28393*/
           && !(*(_QWORD *)v6 ^ anon_597a1ab5dc54f5a7c7ef0ba6972bc544_292
              | *(_QWORD *)(v6 + 5) ^ *(__int64 *)((char *)&anon_597a1ab5dc54f5a7c7ef0ba6972bc544_292 + 5)) )
    {
      goto LABEL_36; /*0x100b28393*/
    }
    if ( !a2[3] ) /*0x100b2839e*/
    {
LABEL_26:
      if ( *(_BYTE *)(_RCX + 168) == 1 ) /*0x100b28495*/
      {
        LOBYTE(v4) = 1; /*0x100b2849b*/
        if ( !*(_QWORD *)(_RCX + 48) ) /*0x100b284a3*/
          return v4; /*0x100b284a3*/
        __s1 = v6; /*0x100b284ad*/
        v23 = _RCX; /*0x100b284b4*/
        v24 = core::hash::BuildHasher::hash_one::h9d6ec3ed5b7c6973(_RCX + 56, v6, v8); /*0x100b284ba*/
        _RCX = v24 >> 57; /*0x100b284c2*/
        v26 = *(_QWORD *)(v23 + 24); /*0x100b284c6*/
        v27 = *(_QWORD *)(v23 + 32); /*0x100b284ca*/
        v28 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v24 >> 57), (__m128i)0LL); /*0x100b284d6*/
        v29 = 0; /*0x100b284db*/
        v30 = (__m128i)-1LL; /*0x100b284dd*/
        while ( 1 ) /*0x100b284e1*/
        {
          v31 = v27 & v24; /*0x100b284e1*/
          v32 = _mm_loadu_si128((const __m128i *)(v26 + v31)); /*0x100b284e4*/
          _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v32, v28)); /*0x100b284f2*/
          if ( _R15D ) /*0x100b284fa*/
            break; /*0x100b284fa*/
LABEL_34:
          _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v32, v30)); /*0x100b28566*/
          if ( (_DWORD)_RCX ) /*0x100b28570*/
            return v4; /*0x100b28570*/
          v24 = v31 + v29 + 16; /*0x100b28576*/
          v29 += 16; /*0x100b2857b*/
        }
        v39 = v31; /*0x100b284fc*/
        v36 = v28; /*0x100b28500*/
        v37.i64[0] = v29; /*0x100b28505*/
        v38 = v32; /*0x100b28509*/
        while ( 1 ) /*0x100b2850e*/
        {
          __asm { tzcnt ecx, r15d } /*0x100b2850e*/
          _RCX = -(__int64)(v27 & (v31 + _RCX)); /*0x100b28519*/
          if ( v8 == *(_QWORD *)(v26 + 24 * _RCX - 8) && !memcmp(__s1, *(const void **)(v26 + 24 * _RCX - 16), v8) ) /*0x100b28536*/
            break; /*0x100b28536*/
          v34 = _R15D - 1; /*0x100b28543*/
          LOWORD(v34) = _R15D & (_R15D - 1); /*0x100b28547*/
          v21 = (_WORD)v34 == 0; /*0x100b28547*/
          _R15D = v34; /*0x100b2854b*/
          v31 = v39; /*0x100b2854e*/
          v28 = _mm_load_si128(&v36); /*0x100b28552*/
          v29 = v37.i64[0]; /*0x100b28557*/
          v30 = (__m128i)-1LL; /*0x100b2855b*/
          v32 = _mm_load_si128(&v38); /*0x100b2855f*/
          if ( v21 ) /*0x100b28564*/
            goto LABEL_34; /*0x100b28564*/
        }
      }
      return 0; /*0x100b2853d*/
    }
    __s1 = v6; /*0x100b283a8*/
    v11 = core::hash::BuildHasher::hash_one::h9d6ec3ed5b7c6973(a2 + 4, v6, v7); /*0x100b283b2*/
    _RCX = v11 >> 57; /*0x100b283ba*/
    v12 = *a2; /*0x100b283be*/
    v13 = a2[1]; /*0x100b283c1*/
    v14 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v11 >> 57), (__m128i)0LL); /*0x100b283cd*/
    v15 = 0; /*0x100b283d2*/
    v16 = (__m128i)-1LL; /*0x100b283d4*/
    while ( 1 ) /*0x100b283d8*/
    {
      v17 = v13 & v11; /*0x100b283d8*/
      v18 = _mm_loadu_si128((const __m128i *)(v12 + v17)); /*0x100b283db*/
      _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v18, v14)); /*0x100b283ea*/
      if ( _R15D ) /*0x100b283f2*/
        break; /*0x100b283f2*/
LABEL_24:
      v22 = v17; /*0x100b2846a*/
      _RCX = a3; /*0x100b28477*/
      v6 = (char *)__s1; /*0x100b2847a*/
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v18, v16)) ) /*0x100b28471*/
        goto LABEL_26; /*0x100b2847e*/
      v11 = v22 + v15 + 16; /*0x100b28480*/
      v15 += 16; /*0x100b28485*/
    }
    v39 = v17; /*0x100b283f4*/
    v36.i64[0] = v13; /*0x100b283f8*/
    v37 = v14; /*0x100b283fc*/
    v38.i64[0] = v15; /*0x100b28401*/
    v35 = v18; /*0x100b28405*/
    while ( 1 ) /*0x100b2840a*/
    {
      __asm { tzcnt ecx, r15d } /*0x100b2840a*/
      _RCX = -(__int64)(v13 & (v17 + _RCX)); /*0x100b28415*/
      if ( v8 == *(_QWORD *)(v12 + 24 * _RCX - 8) ) /*0x100b28421*/
      {
        LOBYTE(v4) = 1; /*0x100b28438*/
        if ( !memcmp(__s1, *(const void **)(v12 + 24 * _RCX - 16), v8) ) /*0x100b28433*/
          break; /*0x100b28433*/
      }
      v20 = _R15D - 1; /*0x100b28443*/
      LOWORD(v20) = _R15D & (_R15D - 1); /*0x100b28447*/
      v21 = (_WORD)v20 == 0; /*0x100b28447*/
      _R15D = v20; /*0x100b2844b*/
      v17 = v39; /*0x100b2844e*/
      v13 = v36.i64[0]; /*0x100b28452*/
      v14 = _mm_load_si128(&v37); /*0x100b28456*/
      v15 = v38.i64[0]; /*0x100b2845b*/
      v16 = (__m128i)-1LL; /*0x100b2845f*/
      v18 = _mm_load_si128(&v35); /*0x100b28463*/
      if ( v21 ) /*0x100b28468*/
        goto LABEL_24; /*0x100b28468*/
    }
  }
  return v4; /*0x100b28344*/
}
/*
真实行为结论（基于完整反编译核对）：
该谓词判定条件（全部在 a1 指向的线程行结构上判断）：
  1. a1[8]（discriminant/tag）必须 == 6，否则直接返回 false；
  2. a1[7] 指向的 provider 字符串前 6 字节大小写不敏感精确等于 "openai"；
  3. a1[15]（native_off 计数）必须为 0；
满足以上三条后，对 trim 后的 a1[16..17]（model 名）做两级 SwissTable HashSet 成员测试：
  - 先对 a2 指向的 HashSet 做 hash_one + SIMD 分组探测（16字节组、tzcnt 找首个匹配槽位、
    memcmp 精确比对），命中即返回 true；
  - 未命中则检查 a3 上下文的 *(a3+168)==1 标志，若真且 *(a3+48) 非空指针，再对该处指向的
    第二个 HashSet 做同样探测，命中同样返回 true。
两处 HashSet 具体存放的 model 名字符串字面量本轮未做内存 dump 逐一提取（仍是诚实缺口，
非 accepted_unknown 伪造闭合）。本函数是纯判定谓词，无副作用、无内存分配、无 I/O。
*/
