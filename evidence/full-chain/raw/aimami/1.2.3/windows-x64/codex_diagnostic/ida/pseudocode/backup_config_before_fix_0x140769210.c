// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x140769210
// name: backup_config_before_fix
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_diagnostic::backup_config_before_fix | 跨平台字符串签名匹配(名↔函数一致)
__int64 *__fastcall backup_config_before_fix(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *result; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int32 v18; // edx
  unsigned __int128 v19; // kr10_16
  __int64 v20; // rax
  __m128i v21; // kr20_16
  unsigned __int64 v22; // r14
  _QWORD *v23; // rdi
  __int64 v24; // r14
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  _QWORD *v27; // rdi
  unsigned __int64 v28; // r13
  __int64 v29; // r14
  __int64 *v30; // rbx
  __int64 v31; // r14
  _QWORD *v32; // rcx
  unsigned __int64 v33; // r15
  _QWORD *v34; // r12
  __int64 *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // r14
  __int64 v38; // rdx
  _QWORD *v39; // rcx
  unsigned __int64 v40; // r15
  __int64 v41; // rdx
  __m128i v42; // xmm0
  __m128i v43; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v44; // [rsp+40h] [rbp-40h] BYREF
  __m128i v45; // [rsp+2A8h] [rbp+228h] BYREF
  __int64 *v46; // [rsp+2B8h] [rbp+238h] BYREF
  __int64 (__fastcall *v47)(); // [rsp+2C0h] [rbp+240h]
  unsigned __int64 v48; // [rsp+2C8h] [rbp+248h]
  __m128i v49; // [rsp+518h] [rbp+498h] BYREF
  __int64 v50; // [rsp+528h] [rbp+4A8h]
  __m128i v51; // [rsp+530h] [rbp+4B0h] BYREF
  __int64 v52; // [rsp+540h] [rbp+4C0h] BYREF
  __int64 v53; // [rsp+548h] [rbp+4C8h]
  __int64 v54; // [rsp+550h] [rbp+4D0h]
  unsigned __int128 v55; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v56; // [rsp+578h] [rbp+4F8h] BYREF
  __int64 v57; // [rsp+580h] [rbp+500h]
  __int64 v58; // [rsp+588h] [rbp+508h]
  __int64 v59; // [rsp+590h] [rbp+510h]
  _QWORD *v60; // [rsp+598h] [rbp+518h]
  __int64 v61; // [rsp+5A0h] [rbp+520h]
  __int64 v62; // [rsp+5A8h] [rbp+528h]
  __int64 v63; // [rsp+5B0h] [rbp+530h] BYREF
  _QWORD *v64; // [rsp+5B8h] [rbp+538h]
  unsigned __int64 v65; // [rsp+5C0h] [rbp+540h]
  __m128i v66; // [rsp+5C8h] [rbp+548h] BYREF
  __int128 v67; // [rsp+5D8h] [rbp+558h]
  __int64 v68; // [rsp+5E8h] [rbp+568h]
  __int64 v69; // [rsp+5F0h] [rbp+570h]
  __int64 v70; // [rsp+5F8h] [rbp+578h]
  __int64 v71; // [rsp+600h] [rbp+580h]
  _BYTE v72[2]; // [rsp+60Eh] [rbp+58Eh] BYREF
  __int64 v73; // [rsp+610h] [rbp+590h]

  v73 = -2;
  sub_14148D3C0(&v45, a2[9], a2[10]);
  v4 = v45.m128i_i64[1];
  if ( v45.m128i_i64[0] == -1 )
  {
    if ( sub_140718A30(v45.m128i_u64[1]) )
    {
      v66.m128i_i64[0] = v4;
      v43.m128i_i64[0] = (__int64)&v66;
      v43.m128i_i64[1] = (__int64)sub_141490720;
      sub_14149C0F0(&v49, &unk_14178D14C, &v43);
      *(_QWORD *)(a1 + 24) = v50;
      *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v49);
      *(_QWORD *)a1 = 10;
      v17 = v66.m128i_i64[0];
    }
    else
    {
      *(_OWORD *)a1 = -1;
      v17 = v4;
    }
    return (__int64 *)sub_1401DD260(v17);
  }
  v68 = v45.m128i_i64[1];
  v70 = v45.m128i_i64[0];
  v5 = (unsigned __int64)v46;
  sub_141473FA0((unsigned int)&v52, a2[97], a2[98], (unsigned int)&unk_14178D127, 14);
  v45.m128i_i8[0] = 1;
  v6 = v54;
  v69 = v53;
  v7 = sub_14147B9A0(&v45, v53, v54);
  if ( v7 )
  {
    v66.m128i_i64[0] = v7;
    v43.m128i_i64[0] = (__int64)&v66;
    v43.m128i_i64[1] = (__int64)sub_141490720;
    sub_14149C0F0(&v45, &unk_141788C06, &v43);
    v43 = v45;
    v44 = v46;
    sub_1401DD260(v66.m128i_i64[0]);
    result = v44;
    *(_QWORD *)(a1 + 24) = v44;
    *(__m128i *)(a1 + 8) = _mm_load_si128(&v43);
    *(_QWORD *)a1 = 10;
    goto LABEL_4;
  }
  v43.m128i_i32[0] = sub_141475580(v9, v8, v10, v11);
  v43.m128i_i32[1] = v18;
  sub_141475530(&v45, &v43, 3577643008LL, 27111902);
  v19 = 0u;
  if ( !v45.m128i_i8[0] )
    v19 = v45.m128i_u64[1] * (unsigned __int128)0x3E8uLL + (unsigned int)v46 / 0xF4240uLL;
  v55 = v19;
  sub_141356270(&v45);
  v51 = v45;
  v45.m128i_i64[0] = (__int64)&v55;
  v45.m128i_i64[1] = (__int64)sub_1414A9600;
  v46 = (__int64 *)&v51;
  v47 = sub_140421AE0;
  sub_14149C0F0(&v56, &unk_14178D135, &v45);
  v71 = v57;
  sub_141473FA0((unsigned int)&v66, v69, v6, v57, v58);
  if ( v56 )
    sub_140001660(v71, v56, 1);
  v62 = v66.m128i_i64[1];
  v20 = sub_1408726C0(v66.m128i_i64[1], v67, v68, v5);
  if ( !v20 )
  {
    sub_141486800((__int64)&v45, v69, v6);
    v21 = v45;
    if ( v45.m128i_i64[0] == 2 )
    {
      result = (__int64 *)sub_1401DD260(v45.m128i_i64[1]);
      goto LABEL_47;
    }
    sub_141684120(&v44, &v46, 608);
    v43 = v21;
    result = (__int64 *)sub_140316B60(&v63, &v43);
    v22 = v65;
    if ( v65 >= 0x15 )
    {
      v27 = v64;
      v72[1] = 1;
      sub_140B58B30(v64, v65, v72);
      v28 = v22 - 20;
      v29 = 4 * v22;
      v30 = &v27[v29];
      v45.m128i_i64[0] = (__int64)v27;
      v59 = v63;
      v46 = (__int64 *)v63;
      v47 = (__int64 (__fastcall *)())&v27[v29];
      v31 = v29 * 8 - 32;
      v32 = v27 + 5;
      v60 = v27;
      result = v27;
      while ( 1 )
      {
        v48 = --v28;
        if ( result == v30 )
          break;
        v33 = v31;
        v34 = v32;
        v35 = result + 4;
        v45.m128i_i64[1] = (__int64)(result + 4);
        if ( *result != -1 )
        {
          v71 = *result;
          v36 = result[2];
          v61 = result[1];
          v37 = sub_141485EF0(v61, v36);
          if ( v71 )
            sub_140001660(v61, v71, 1);
          if ( v37 )
            sub_1401DD260(v37);
          v31 = v33 - 32;
          v32 = v34 + 4;
          result = v35;
          if ( v28 )
            continue;
        }
        if ( v30 != v35 )
        {
          v40 = v33 >> 5;
          do
          {
            v41 = *(v34 - 1);
            if ( v41 )
              result = (__int64 *)sub_140001660(*v34, v41, 1);
            v34 += 4;
            --v40;
          }
          while ( v40 );
        }
        break;
      }
      if ( v59 )
      {
        v38 = 32 * v59;
        v39 = v60;
        goto LABEL_46;
      }
    }
    else
    {
      v23 = v64;
      if ( v65 )
      {
        v24 = 32 * v65;
        v25 = 0;
        do
        {
          v26 = v23[v25 / 8];
          if ( v26 )
            result = (__int64 *)sub_140001660(v23[v25 / 8 + 1], v26, 1);
          v25 += 32LL;
        }
        while ( v24 != v25 );
      }
      if ( v63 )
      {
        v38 = 32 * v63;
        v39 = v23;
LABEL_46:
        result = (__int64 *)sub_140001660(v39, v38, 8);
      }
    }
LABEL_47:
    v42 = _mm_loadu_si128(&v66);
    *(_OWORD *)(a1 + 24) = v67;
    *(__m128i *)(a1 + 8) = v42;
    *(_QWORD *)a1 = -1;
    if ( v52 )
      result = (__int64 *)sub_140001660(v69, v52, 1);
    v16 = v70;
    v15 = v68;
    if ( v70 )
      return (__int64 *)sub_140001660(v15, v16, 1);
    return result;
  }
  v63 = v20;
  v43.m128i_i64[0] = (__int64)&v63;
  v43.m128i_i64[1] = (__int64)sub_141490720;
  sub_14149C0F0(&v45, &unk_141788C30, &v43);
  v43 = v45;
  v44 = v46;
  sub_1401DD260(v63);
  result = v44;
  *(_QWORD *)(a1 + 24) = v44;
  *(__m128i *)(a1 + 8) = _mm_load_si128(&v43);
  *(_QWORD *)a1 = 10;
  if ( v66.m128i_i64[0] )
    result = (__int64 *)sub_140001660(v62, v66.m128i_i64[0], 1);
LABEL_4:
  v13 = v68;
  v14 = v70;
  if ( v52 )
    result = (__int64 *)sub_140001660(v69, v52, 1);
  if ( v14 )
  {
    v15 = v13;
    v16 = v14;
    return (__int64 *)sub_140001660(v15, v16, 1);
  }
  return result;
}