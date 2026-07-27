// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x14088dc40
// name: sub_14088DC40
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14088DC40(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r14
  char v11; // al
  __int64 v12; // rbx
  __int64 v13; // r15
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  int v17; // eax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v23[12]; // [rsp+30h] [rbp-50h]
  __int128 v24; // [rsp+90h] [rbp+10h]
  __int128 v25; // [rsp+A0h] [rbp+20h]
  __int128 v26; // [rsp+B0h] [rbp+30h]
  __int128 v27; // [rsp+C0h] [rbp+40h]
  __int128 v28; // [rsp+D0h] [rbp+50h]
  __int64 v29; // [rsp+E0h] [rbp+60h]
  __int128 v30; // [rsp+F0h] [rbp+70h]
  __int128 v31; // [rsp+100h] [rbp+80h]
  __int64 v32; // [rsp+110h] [rbp+90h]
  __int64 v33; // [rsp+118h] [rbp+98h]
  __int64 v34; // [rsp+120h] [rbp+A0h]

  v34 = -2;
  v5 = *(__int64 **)(a2 + 8);
  if ( (unsigned __int8)sub_1413057F0(**(_QWORD **)a2, a3) )
  {
    v8 = *v5;
    v9 = *(unsigned __int8 *)(*v5 + 8);
    v33 = *v5;
    switch ( v9 )
    {
      case 0LL:
        *(_QWORD *)(v8 + 472) = *(_QWORD *)v8;
        *(_BYTE *)(v8 + 492) = 0;
        goto LABEL_4;
      case 1LL:
        sub_1416C3400(&off_141795A40, v8, v6, v7);
      case 2LL:
        sub_1416C3420(&off_141795A40, v8, v6, v7);
      case 3LL:
LABEL_4:
        v32 = v8 + 16;
        hbb4b340bd79fba8f_1((const __m128i *)&v22, (_QWORD *)(v8 + 16), a3, v7);
        v10 = v22;
        if ( v22 == -2 )
        {
          v11 = 3;
LABEL_11:
          *(_BYTE *)(v33 + 8) = v11;
LABEL_12:
          *(_QWORD *)a1 = -3;
          return a1;
        }
        v12 = v23[0];
        v30 = *(_OWORD *)&v23[1];
        v25 = *(_OWORD *)&v23[3];
        v26 = *(_OWORD *)&v23[5];
        v27 = *(_OWORD *)&v23[7];
        v28 = *(_OWORD *)&v23[9];
        v29 = v23[11];
        v13 = v32;
        sub_1407D8530(v32);
        if ( v10 != -1 )
        {
          v8 = v33;
          *(_QWORD *)(v33 + 16) = v10;
          *(_QWORD *)(v8 + 24) = v12;
          *(_OWORD *)(v8 + 32) = v30;
          v14 = v26;
          v15 = v27;
          v16 = v28;
          *(_OWORD *)(v8 + 48) = v25;
          *(_OWORD *)(v8 + 64) = v14;
          *(_OWORD *)(v8 + 80) = v15;
          *(_OWORD *)(v8 + 96) = v16;
          *(_QWORD *)(v8 + 112) = v29;
          *(_QWORD *)(v8 + 120) = 0;
          *(_DWORD *)(v8 + 128) = 100000000;
          *(_QWORD *)(v8 + 136) = v13;
          *(_BYTE *)(v8 + 200) = 0;
LABEL_9:
          v32 = v8 + 120;
          sub_1408323C0(&v22, (__int64 *)(v8 + 120), a3, v7);
          v12 = v22;
          if ( v22 == -2 )
          {
            v11 = 4;
            goto LABEL_11;
          }
          v24 = *(_OWORD *)v23;
          v17 = *(unsigned __int8 *)(v33 + 200);
          switch ( v17 )
          {
            case 5:
              break;
            case 4:
              sub_1405E6D10(v33 + 208);
              break;
            case 3:
              v18 = *(_QWORD *)(v33 + 208);
              if ( v18 != -1 )
              {
                v19 = 5;
                if ( v18 < 0 )
                  v19 = v18 ^ 0x8000000000000000uLL;
                if ( v19 < 4 )
                {
                  v18 = *(_QWORD *)(v33 + 216);
                  v20 = 216;
                  goto LABEL_26;
                }
                v20 = 208;
                if ( v19 != 4
                  || (v18 = *(_QWORD *)(v33 + 216), v20 = 216, (unsigned __int64)v18 <= 0xFFFFFFFFFFFFFFFDuLL) )
                {
LABEL_26:
                  if ( v18 )
                    sub_140001660(*(_QWORD *)(v33 + v20 + 8), v18, 1);
                }
              }
              break;
            default:
LABEL_29:
              sub_1407DB4B0(v33 + 16);
              v31 = v24;
              *(_BYTE *)(v33 + 8) = 1;
              goto LABEL_30;
          }
          sub_1400104F0(v33 + 168);
          goto LABEL_29;
        }
        v31 = v30;
        *(_BYTE *)(v33 + 8) = 1;
        if ( v12 == -2 )
          goto LABEL_12;
LABEL_30:
        *(_OWORD *)(a1 + 8) = v31;
        *(_QWORD *)a1 = v12;
        break;
      case 4LL:
        goto LABEL_9;
    }
  }
  else
  {
    *(_QWORD *)a1 = -2;
  }
  return a1;
}