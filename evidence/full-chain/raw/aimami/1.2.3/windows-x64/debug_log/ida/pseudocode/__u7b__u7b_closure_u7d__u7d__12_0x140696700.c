// module: codexmate_lib/platform/debug_log
// addr: 0x140696700
// name: __u7b__u7b_closure_u7d__u7d__12
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::platform::debug_log::install_panic_hook::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$ | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall _u7b__u7b_closure_u7d__u7d__12(_QWORD *a1, __int64 **a2)
{
  const __m128i *v4; // roff
  __int64 *v5; // r14
  void (__fastcall *v6)(__m128i *, __int64 *); // r15
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rcx
  __m128i *v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 result; // rax
  __m128i v18; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v19[3]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v20; // [rsp+70h] [rbp-10h] BYREF
  __int64 v21; // [rsp+78h] [rbp-8h]
  __int64 v22; // [rsp+80h] [rbp+0h]
  __int64 v23; // [rsp+88h] [rbp+8h]
  __m128i v24; // [rsp+90h] [rbp+10h] BYREF
  __m128i *v25; // [rsp+A0h] [rbp+20h]
  __int64 (__fastcall *v26)(); // [rsp+A8h] [rbp+28h]
  __m128i *v27; // [rsp+B0h] [rbp+30h]
  __int64 (__fastcall *v28)(); // [rsp+B8h] [rbp+38h]
  __m128i v29; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v30; // [rsp+D0h] [rbp+50h]
  __int64 v31; // [rsp+E0h] [rbp+60h]

  v31 = -2;
  v4 = (const __m128i *)a2[2];
  v18 = _mm_loadu_si128(v4);
  v29.m128i_i32[0] = v4[1].m128i_i32[0];
  v24.m128i_i64[0] = (__int64)&v18;
  v24.m128i_i64[1] = (__int64)sub_14041F680;
  v25 = &v29;
  v26 = sub_1414AB780;
  sub_14149C0F0(v19, &unk_14178173F, &v24);
  v5 = *a2;
  v6 = (void (__fastcall *)(__m128i *, __int64 *))a2[1][3];
  v6(&v24, *a2);
  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v24), (__m128i)xmmword_14177F2F0)) == 0xFFFF )
  {
    v8 = v5[1];
    if ( v8 < 0 )
    {
      v9 = 0;
      goto LABEL_4;
    }
    if ( v8 )
    {
      v12 = *v5;
      nullsub_1(v7);
      v9 = 1;
      v13 = sub_140001650(v8, 1);
      if ( !v13 )
LABEL_4:
        sub_1416C2D4B(v9, v8);
      v14 = v13;
      sub_141684120(v13, v12, v8);
    }
    else
    {
      v14 = 1;
    }
    v24.m128i_i64[0] = v8;
    v24.m128i_i64[1] = v14;
    v25 = (__m128i *)v8;
    goto LABEL_14;
  }
  v6(&v24, v5);
  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v24), (__m128i)xmmword_14177F2E0)) == 0xFFFF )
  {
    sub_14149C500(&v24, v5);
    if ( v24.m128i_i64[0] != -1 )
    {
LABEL_14:
      v30 = (__int64)v25;
      v29 = v24;
      goto LABEL_15;
    }
  }
  nullsub_1(v10);
  v11 = (__m128i *)sub_140001650(24, 1);
  if ( !v11 )
    sub_1416C2D4B(1, 24);
  *v11 = _mm_loadu_si128((const __m128i *)&xmmword_141781744);
  v11[1].m128i_i64[0] = 0x64616F6C79617020LL;
  v29.m128i_i64[0] = 24;
  v29.m128i_i64[1] = (__int64)v11;
  v30 = 24;
LABEL_15:
  sub_141474BD0(&v18);
  v24.m128i_i64[0] = (__int64)v19;
  v24.m128i_i64[1] = (__int64)sub_1400015F0;
  v25 = &v29;
  v26 = (__int64 (__fastcall *)())sub_1400015F0;
  v27 = &v18;
  v28 = sub_14148FCB0;
  sub_14149C0F0(&v20, &unk_1417819C8, &v24);
  if ( dword_141EC2478 )
  {
    v15 = v20;
    if ( !v20 )
      goto LABEL_21;
    v16 = v21;
  }
  else
  {
    v23 = v21;
    sub_1404032D0(&unk_141EC2458, v21, v22);
    v15 = v20;
    if ( !v20 )
      goto LABEL_21;
    v16 = v23;
  }
  sub_140001660(v16, v15, 1);
LABEL_21:
  result = (*(__int64 (__fastcall **)(_QWORD, __int64 **))(a1[1] + 40LL))(*a1, a2);
  if ( v18.m128i_i32[0] >= 2u )
    result = sub_140975CA0(&v18.m128i_u64[1]);
  if ( v29.m128i_i64[0] )
    result = sub_140001660(v29.m128i_i64[1], v29.m128i_i64[0], 1);
  if ( v19[0] )
    return sub_140001660(v19[1], v19[0], 1);
  return result;
}
