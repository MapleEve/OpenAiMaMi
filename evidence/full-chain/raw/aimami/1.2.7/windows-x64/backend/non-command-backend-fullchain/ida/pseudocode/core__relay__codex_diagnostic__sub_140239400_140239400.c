// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x140239400 | name sub_140239400
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140239400(__int64 a1, __int128 *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int128 *v6; // rax
  __int64 v7; // rdx
  __int128 v8; // kr00_16
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  signed __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  signed __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // r15
  const __m128i *v21; // rdi
  __m128i *v22; // rax
  const __m128i *v23; // r14
  __m128i *v24; // rax
  __int128 *v25; // [rsp+40h] [rbp-40h] BYREF
  __int64 v26; // [rsp+48h] [rbp-38h]
  __int128 v27; // [rsp+50h] [rbp-30h]
  __int128 v28; // [rsp+60h] [rbp-20h]
  __int128 v29; // [rsp+70h] [rbp-10h]
  __int128 v30; // [rsp+80h] [rbp+0h]
  __int128 v31; // [rsp+90h] [rbp+10h]
  char v32; // [rsp+A0h] [rbp+20h] BYREF
  _BYTE v33[7]; // [rsp+A1h] [rbp+21h]
  __int64 v34; // [rsp+A8h] [rbp+28h]
  __int128 v35; // [rsp+B0h] [rbp+30h]
  char v36; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE v37[7]; // [rsp+C1h] [rbp+41h]
  __int64 v38; // [rsp+C8h] [rbp+48h]
  __int128 v39; // [rsp+D0h] [rbp+50h]
  __int64 v40; // [rsp+E0h] [rbp+60h]
  __int64 v41; // [rsp+E8h] [rbp+68h]
  __int64 v42; // [rsp+F0h] [rbp+70h]
  __int64 v43; // [rsp+F8h] [rbp+78h]
  __int64 v44; // [rsp+100h] [rbp+80h]

  v44 = -2;
  v3 = a3;
  v25 = a2;
  v26 = a3;
  v27 = 0;
  *(_QWORD *)&v28 = a2;
  *((_QWORD *)&v28 + 1) = a3;
  sub_14062D280(&v32, &v25);
  if ( v32 == -1 )
  {
    result = v34;
    *(_QWORD *)a1 = 3;
    *(_QWORD *)(a1 + 8) = result;
    return result;
  }
  *(_DWORD *)&v37[3] = *(_DWORD *)&v33[3];
  *(_DWORD *)v37 = *(_DWORD *)v33;
  v39 = v35;
  v36 = v32;
  v38 = v34;
  sub_140231180((__int64)&v25, a2);
  v6 = v25;
  v7 = v26;
  v8 = v27;
  if ( v25 == (__int128 *)-1LL )
  {
    if ( v26 == -1 )
      v8 = 1u;
    v41 = v8;
    if ( v26 == -1 )
      v7 = 0;
    v40 = v7;
    v13 = sub_141642800(&v36, aPayloadModel, 14);
    if ( v13 && *(_BYTE *)v13 == 3 )
    {
      v15 = *(_QWORD *)(v13 + 24);
      if ( v15 < 0 )
      {
        v3 = 0;
        goto LABEL_13;
      }
      if ( v15 )
      {
        v21 = *(const __m128i **)(v13 + 16);
        nullsub_1(v14);
        v3 = 1;
        v22 = (__m128i *)sub_140001650(v15, 1);
        if ( !v22 )
LABEL_13:
          sub_141938D2B(v3, v15);
        v42 = (__int64)v22;
        v43 = v15;
        sub_1418F44E0(v22, v21, v15);
      }
      else
      {
        v42 = 1;
        v43 = 0;
      }
    }
    else
    {
      v43 = -1;
    }
    v16 = sub_141642800(&v36, aPayloadModelRe, 31);
    v18 = -1;
    if ( v16 )
    {
      v19 = v43;
      if ( *(_BYTE *)v16 == 3 )
      {
        v18 = *(_QWORD *)(v16 + 24);
        if ( v18 < 0 )
        {
          v20 = 0;
          goto LABEL_19;
        }
        if ( v18 )
        {
          v23 = *(const __m128i **)(v16 + 16);
          nullsub_1(v17);
          v20 = 1;
          v24 = (__m128i *)sub_140001650(v18, 1);
          if ( !v24 )
LABEL_19:
            sub_141938D2B(v20, v18);
          v3 = (__int64)v24;
          sub_1418F44E0(v24, v23, v18);
        }
        else
        {
          v3 = 1;
          v18 = 0;
        }
      }
    }
    else
    {
      v19 = v43;
    }
    *(_QWORD *)(a1 + 8) = v40;
    *(_QWORD *)(a1 + 16) = v41;
    *(_QWORD *)(a1 + 24) = *((_QWORD *)&v8 + 1);
    *(_QWORD *)(a1 + 32) = v19;
    *(_QWORD *)(a1 + 40) = v42;
    *(_QWORD *)(a1 + 48) = v19;
    *(_QWORD *)(a1 + 56) = v18;
    *(_QWORD *)(a1 + 64) = v3;
    *(_QWORD *)(a1 + 72) = v18;
    *(_QWORD *)a1 = -1;
    return sub_14002F9D0(&v36);
  }
  v9 = v28;
  v10 = v29;
  v11 = v30;
  *(_OWORD *)(a1 + 80) = v31;
  *(_OWORD *)(a1 + 64) = v11;
  *(_OWORD *)(a1 + 48) = v10;
  *(_OWORD *)(a1 + 32) = v9;
  *(_OWORD *)(a1 + 16) = v8;
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = v7;
  return sub_14002F9D0(&v36);
}
