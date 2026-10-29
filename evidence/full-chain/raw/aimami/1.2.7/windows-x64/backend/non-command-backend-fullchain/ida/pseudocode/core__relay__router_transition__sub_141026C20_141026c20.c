// win 1.2.7 | module src/core/relay/router_transition.rs | ea 0x141026c20 | name sub_141026C20
// win 1.2.7 | module src/core/relay/router_transition.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141026C20(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        __int64 a7)
{
  __int128 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  char v14; // r9
  __int128 v15; // xmm0
  __int128 v16; // kr00_16
  char v17; // bp
  __int64 v18; // rdx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __m128i *v22; // rax
  __m128i *v23; // rdi
  __int64 v25; // [rsp+58h] [rbp-C0h]
  __int128 v26; // [rsp+60h] [rbp-B8h] BYREF
  __m256i v27; // [rsp+70h] [rbp-A8h]
  __int128 v28; // [rsp+90h] [rbp-88h]
  __int128 v29; // [rsp+A0h] [rbp-78h]
  __int128 v30; // [rsp+B0h] [rbp-68h]
  __int128 v31; // [rsp+C0h] [rbp-58h]
  __int64 v32; // [rsp+D0h] [rbp-48h]

  sub_1410257E0(&v26);
  v11 = v26;
  v12 = v27.m256i_i64[0];
  if ( (_QWORD)v26 == -1 )
  {
    if ( *((_QWORD *)&v26 + 1) == -1 )
      goto LABEL_9;
    v16 = *(_OWORD *)&v27.m256i_u64[2];
    v17 = BYTE8(v29);
    if ( *((_QWORD *)&v26 + 1) )
      sub_140001660(v27.m256i_i64[0], *((_QWORD *)&v26 + 1), 1);
    if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(*((_QWORD *)&v16 + 1), v16, 1);
    if ( v17 == a3 )
    {
LABEL_9:
      sub_141022A10((__int64)&v26, a2, a3, (const __m128i *)&unk_141A6FF3A, 8, a4, a5, a6, a7, 1u);
      if ( (_DWORD)v26 == -1 )
      {
        sub_1401BD710(*((unsigned __int64 *)&v26 + 1), v18);
        *(_QWORD *)a1 = -1;
      }
      else
      {
        *(_OWORD *)(a1 + 80) = v30;
        *(_OWORD *)(a1 + 64) = v29;
        v19 = v26;
        v20 = *(_OWORD *)v27.m256i_i8;
        v21 = *(_OWORD *)&v27.m256i_u64[2];
        *(_OWORD *)(a1 + 48) = v28;
        *(_OWORD *)(a1 + 32) = v21;
        *(_OWORD *)(a1 + 16) = v20;
        *(_OWORD *)a1 = v19;
      }
    }
    else
    {
      nullsub_1(v12);
      v22 = (__m128i *)sub_140001650(170, 1);
      if ( !v22 )
        sub_141938D2B(1, 170);
      v23 = v22;
      sub_1418F44E0(v22, (const __m128i *)aRouterCommitRe, 0xAAu);
      *(_QWORD *)a1 = 10;
      *(_QWORD *)(a1 + 8) = 170;
      *(_QWORD *)(a1 + 16) = v23;
      *(_QWORD *)(a1 + 24) = 170;
    }
  }
  else
  {
    v13 = v27.m256i_i64[3];
    v31 = v28;
    v32 = v29;
    v14 = BYTE8(v29);
    LODWORD(v25) = *(_DWORD *)((char *)&v29 + 9);
    *(_DWORD *)((char *)&v25 + 3) = HIDWORD(v29);
    *(_OWORD *)(a1 + 80) = v30;
    v15 = *(_OWORD *)&v27.m256i_u64[1];
    *(_QWORD *)(a1 + 16) = v12;
    *(_OWORD *)(a1 + 24) = v15;
    *(_QWORD *)(a1 + 40) = v13;
    *(_OWORD *)(a1 + 48) = v31;
    *(_QWORD *)(a1 + 64) = v32;
    *(_BYTE *)(a1 + 72) = v14;
    *(_DWORD *)(a1 + 73) = v25;
    *(_DWORD *)(a1 + 76) = *(_DWORD *)((char *)&v25 + 3);
    *(_OWORD *)a1 = v11;
  }
  return a1;
}
