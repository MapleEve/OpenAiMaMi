// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140253440 | name sub_140253440
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140253440(_QWORD *a1, __int64 a2, __int128 *a3, __int64 a4)
{
  unsigned __int64 v5; // rcx
  __int64 result; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int64 v16; // rdi
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // rcx
  unsigned __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rdi
  __int64 v29; // rcx
  _QWORD v30[2]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v31; // [rsp+38h] [rbp-48h] BYREF
  __int64 v32; // [rsp+48h] [rbp-38h]
  __int64 v33; // [rsp+50h] [rbp-30h]
  __int128 v34; // [rsp+58h] [rbp-28h] BYREF
  __int64 v35; // [rsp+68h] [rbp-18h]
  __int128 v36; // [rsp+70h] [rbp-10h] BYREF
  __int64 v37; // [rsp+80h] [rbp+0h]
  __int128 v38; // [rsp+88h] [rbp+8h] BYREF
  __int64 v39; // [rsp+98h] [rbp+18h]
  __int128 v40; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v41; // [rsp+B0h] [rbp+30h]
  __int64 v42; // [rsp+B8h] [rbp+38h] BYREF
  __int64 (__fastcall *v43)(); // [rsp+C0h] [rbp+40h]
  __int128 *v44; // [rsp+C8h] [rbp+48h]
  __int64 (__fastcall *v45)(); // [rsp+D0h] [rbp+50h]
  __int128 *v46; // [rsp+D8h] [rbp+58h]
  __int64 (__fastcall *v47)(); // [rsp+E0h] [rbp+60h]
  char *v48; // [rsp+E8h] [rbp+68h]
  __int64 (__fastcall *v49)(); // [rsp+F0h] [rbp+70h]
  _QWORD *v50; // [rsp+F8h] [rbp+78h]
  __int64 (__fastcall *v51)(); // [rsp+100h] [rbp+80h]
  __int64 v52; // [rsp+108h] [rbp+88h]
  __int128 v53; // [rsp+110h] [rbp+90h] BYREF
  __int128 v54; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v55; // [rsp+130h] [rbp+B0h]
  __int128 v56; // [rsp+140h] [rbp+C0h]
  __int64 v57; // [rsp+150h] [rbp+D0h]
  __int64 v58; // [rsp+158h] [rbp+D8h]
  __int64 v59; // [rsp+160h] [rbp+E0h]
  __int64 v60; // [rsp+168h] [rbp+E8h]

  v60 = -2;
  ++a1[9];
  v30[0] = a4;
  v5 = 2;
  if ( (*(_QWORD *)a3 ^ 0x8000000000000000uLL) < 5 )
    v5 = *(_QWORD *)a3 ^ 0x8000000000000000uLL;
  v30[1] = 6;
  switch ( v5 )
  {
    case 0uLL:
      ++a1[12];
      v42 = a2;
      v43 = sub_1400015F0;
      result = sub_1416ABFD0(&v40, &unk_1419DFD76, &v42);
      v7 = a1[8];
      if ( v7 >= 3 )
      {
        v26 = v40;
        if ( (_QWORD)v40 )
        {
          v27 = *((_QWORD *)&v40 + 1);
          return sub_140001660(v27, v26, 1);
        }
      }
      else
      {
        if ( v7 == a1[6] )
        {
          v58 = *((_QWORD *)&v40 + 1);
          v59 = v40;
          sub_14190FDC0(a1 + 6);
        }
        result = a1[7];
        v8 = 3 * v7;
        *(_QWORD *)(result + 8 * v8 + 16) = v41;
        *(_OWORD *)(result + 8 * v8) = v40;
        a1[8] = v7 + 1;
      }
      return result;
    case 1uLL:
      v59 = *((_QWORD *)a3 + 1);
      v22 = *((_QWORD *)a3 + 2);
      v23 = *((_QWORD *)a3 + 3);
      ++a1[12];
      v58 = v22;
      *(_QWORD *)&v53 = v22;
      *((_QWORD *)&v53 + 1) = v23;
      v42 = a2;
      v43 = sub_1400015F0;
      v44 = &v53;
      v45 = (__int64 (__fastcall *)())sub_14169F630;
      result = sub_1416ABFD0(&v38, &unk_1419DFD8F, &v42);
      v24 = a1[8];
      if ( v24 >= 3 )
      {
        if ( (_QWORD)v38 )
          result = sub_140001660(*((_QWORD *)&v38 + 1), v38, 1);
      }
      else
      {
        if ( v24 == a1[6] )
        {
          v33 = *((_QWORD *)&v38 + 1);
          v52 = v38;
          sub_14190FDC0(a1 + 6);
        }
        result = a1[7];
        v25 = 3 * v24;
        *(_QWORD *)(result + 8 * v25 + 16) = v39;
        *(_OWORD *)(result + 8 * v25) = v38;
        a1[8] = v24 + 1;
      }
      v26 = v59;
      if ( v59 )
      {
        v27 = v58;
        return sub_140001660(v27, v26, 1);
      }
      return result;
    case 2uLL:
      v13 = a3[1];
      v14 = a3[2];
      v15 = a3[3];
      v53 = *a3;
      v57 = *((_QWORD *)a3 + 8);
      v56 = v15;
      v55 = v14;
      v54 = v13;
      v16 = v53;
      if ( (_QWORD)v53 != -1 )
      {
        result = sub_140237AF0(*((_QWORD *)&v53 + 1), v54);
        if ( !(_BYTE)result )
          goto LABEL_50;
      }
      v17 = *((_QWORD *)&v54 + 1);
      if ( *((_QWORD *)&v54 + 1) == -1 || (result = sub_140237AF0(v55, *((_QWORD *)&v55 + 1)), (_BYTE)result) )
      {
        v18 = v56;
        if ( (_QWORD)v56 == -1 || (result = sub_140237AF0(*((_QWORD *)&v56 + 1), v57), (_BYTE)result) )
        {
          v19 = a2;
          if ( *(_QWORD *)(a2 + 40) == 6
            && !(*(_DWORD *)a4 ^ **(_DWORD **)(a2 + 32)
               | (unsigned __int16)(*(_WORD *)(a4 + 4) ^ *(_WORD *)(*(_QWORD *)(a2 + 32) + 4LL))) )
          {
            result = sub_1401F3FA0(&v53, a4);
            v19 = a2;
            if ( (_BYTE)result )
              goto LABEL_66;
          }
          else
          {
            ++a1[10];
            if ( (v16 == -1
               || (_QWORD)v54 == 6
               && !(*(_DWORD *)a4 ^ **((_DWORD **)&v53 + 1)
                  | (unsigned __int16)(*(_WORD *)(a4 + 4) ^ *(_WORD *)(*((_QWORD *)&v53 + 1) + 4LL))))
              && (v17 == -1
               || *((_QWORD *)&v55 + 1) == 6
               && !(*(_DWORD *)a4 ^ *(_DWORD *)v55 | (unsigned __int16)(*(_WORD *)(a4 + 4) ^ *(_WORD *)(v55 + 4))))
              && (v18 == -1
               || v57 == 6
               && !(*(_DWORD *)a4 ^ **((_DWORD **)&v56 + 1)
                  | (unsigned __int16)(*(_WORD *)(a4 + 4) ^ *(_WORD *)(*((_QWORD *)&v56 + 1) + 4LL)))) )
            {
LABEL_60:
              v42 = v19;
              v43 = sub_1400015F0;
              v44 = (__int128 *)(v19 + 24);
              v45 = sub_1400015F0;
              v46 = &v53;
              v47 = sub_140289980;
              v48 = (char *)&v54 + 8;
              v49 = sub_140289980;
              v50 = v30;
              v51 = sub_140186EE0;
              result = sub_1416ABFD0(&v34, &unk_1419DFDA8, &v42);
              v28 = a1[8];
              if ( v28 >= 3 )
              {
                if ( (_QWORD)v34 )
                  result = sub_140001660(*((_QWORD *)&v34 + 1), v34, 1);
              }
              else
              {
                if ( v28 == a1[6] )
                {
                  v58 = *((_QWORD *)&v34 + 1);
                  v59 = v34;
                  sub_14190FDC0(a1 + 6);
                }
                result = a1[7];
                v29 = 3 * v28;
                *(_QWORD *)(result + 8 * v29 + 16) = v35;
                *(_OWORD *)(result + 8 * v29) = v34;
                a1[8] = v28 + 1;
              }
LABEL_66:
              if ( (_QWORD)v53 != -1 && (_QWORD)v53 )
                result = sub_140001660(*((_QWORD *)&v53 + 1), v53, 1);
              if ( *((_QWORD *)&v54 + 1) != -1 && *((_QWORD *)&v54 + 1) )
                result = sub_140001660(v55, *((_QWORD *)&v54 + 1), 1);
              v26 = v56;
              if ( (_QWORD)v56 != -1 && (_QWORD)v56 )
              {
                v27 = *((_QWORD *)&v56 + 1);
                return sub_140001660(v27, v26, 1);
              }
              return result;
            }
          }
          ++a1[11];
          goto LABEL_60;
        }
      }
      if ( (_QWORD)v53 != -1 )
      {
LABEL_50:
        if ( (_QWORD)v53 )
          result = sub_140001660(*((_QWORD *)&v53 + 1), v53, 1);
      }
      if ( *((_QWORD *)&v54 + 1) != -1 && *((_QWORD *)&v54 + 1) )
        result = sub_140001660(v55, *((_QWORD *)&v54 + 1), 1);
      if ( (_QWORD)v56 != -1 && (_QWORD)v56 )
        return sub_140001660(*((_QWORD *)&v56 + 1), v56, 1);
      return result;
    case 3uLL:
      *(_QWORD *)&v54 = *((_QWORD *)a3 + 3);
      ++a1[13];
      v53 = *(__int128 *)((char *)a3 + 8);
      v42 = a2;
      v43 = sub_1400015F0;
      v44 = &v53;
      v45 = sub_1400015F0;
      result = sub_1416ABFD0(&v36, &unk_1419D58EB, &v42);
      v20 = a1[8];
      if ( v20 >= 3 )
      {
        if ( (_QWORD)v36 )
          result = sub_140001660(*((_QWORD *)&v36 + 1), v36, 1);
      }
      else
      {
        if ( v20 == a1[6] )
        {
          v58 = *((_QWORD *)&v36 + 1);
          v59 = v36;
          sub_14190FDC0(a1 + 6);
        }
        result = a1[7];
        v21 = 3 * v20;
        *(_QWORD *)(result + 8 * v21 + 16) = v37;
        *(_OWORD *)(result + 8 * v21) = v36;
        a1[8] = v20 + 1;
      }
      goto LABEL_41;
    case 4uLL:
      *(_QWORD *)&v54 = *((_QWORD *)a3 + 3);
      v53 = *(__int128 *)((char *)a3 + 8);
      v42 = a2;
      v43 = sub_1400015F0;
      v44 = &v53;
      v45 = sub_1400015F0;
      sub_1416ABFD0(&v31, &unk_1419D58EB, &v42);
      v9 = a1[5];
      if ( v9 == a1[3] )
        sub_14190FDC0(a1 + 3);
      result = a1[4];
      v10 = 3 * v9;
      *(_QWORD *)(result + 8 * v10 + 16) = v32;
      *(_OWORD *)(result + 8 * v10) = v31;
      a1[5] = v9 + 1;
LABEL_41:
      v26 = v53;
      if ( (_QWORD)v53 )
      {
        v27 = *((_QWORD *)&v53 + 1);
        return sub_140001660(v27, v26, 1);
      }
      return result;
  }
}
