// module: codexmate_lib/core/repository
// addr: 0x140386ca0
// name: rollback
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
// win 1.2.3 | = mac codexmate_lib::core::repository::SnapshotQuarantine::rollback | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall rollback(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rsi
  _QWORD *v21; // rdi
  __int64 v22; // rdx
  __int64 result; // rax
  __int128 v24; // [rsp+28h] [rbp-58h] BYREF
  __int64 v25; // [rsp+38h] [rbp-48h]
  __int128 v26; // [rsp+40h] [rbp-40h] BYREF
  __int64 v27; // [rsp+50h] [rbp-30h]
  __int64 v28; // [rsp+58h] [rbp-28h]
  __int128 v29; // [rsp+60h] [rbp-20h] BYREF
  __int128 v30; // [rsp+70h] [rbp-10h]
  __int128 v31; // [rsp+80h] [rbp+0h]
  __int128 v32; // [rsp+90h] [rbp+10h]
  __int128 v33; // [rsp+A0h] [rbp+20h]
  __int64 v34; // [rsp+B0h] [rbp+30h]
  __int128 v35; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v36; // [rsp+D0h] [rbp+50h]
  __int128 v37; // [rsp+E0h] [rbp+60h]
  __int128 v38; // [rsp+F0h] [rbp+70h]
  __int128 v39; // [rsp+100h] [rbp+80h]
  __int64 v40; // [rsp+110h] [rbp+90h]
  _QWORD *v41; // [rsp+118h] [rbp+98h]
  __int64 v42; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v43; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v44; // [rsp+130h] [rbp+B0h]
  __int64 v45; // [rsp+138h] [rbp+B8h]
  __int64 v46; // [rsp+140h] [rbp+C0h]

  v46 = -2;
  v41 = a1;
  v43 = 0;
  v44 = 8;
  v45 = 0;
  v2 = *(_QWORD *)(a2 + 40);
  v28 = a2;
  v3 = v2 + (*(_QWORD *)(a2 + 48) << 6);
  while ( v2 != v3 )
  {
    sub_141486710(&v35, *(_QWORD *)(v3 - 24), *(_QWORD *)(v3 - 16));
    v6 = v3 - 64;
    if ( (_DWORD)v35 == 2 )
    {
      *((_QWORD *)&v29 + 1) = *((_QWORD *)&v35 + 1);
      *(_QWORD *)&v29 = 2;
      goto LABEL_7;
    }
    v29 = v35;
    v34 = v40;
    v33 = v39;
    v32 = v38;
    v31 = v37;
    v30 = v36;
    if ( (_QWORD)v35 == 2 )
    {
LABEL_7:
      sub_140018650((char *)&v29 + 8);
      v3 -= 64;
    }
    else
    {
      v7 = *(_QWORD *)(v3 - 56);
      v8 = *(_QWORD *)(v3 - 48);
      sub_141486710(&v35, v7, v8);
      if ( (_DWORD)v35 == 2 )
      {
        *((_QWORD *)&v29 + 1) = *((_QWORD *)&v35 + 1);
        *(_QWORD *)&v29 = 2;
LABEL_11:
        sub_140018650((char *)&v29 + 8);
        v9 = sub_141486540(*(_QWORD *)(v3 - 24), *(_QWORD *)(v3 - 16), *(_QWORD *)(v3 - 56), *(_QWORD *)(v3 - 48));
        v3 -= 64;
        if ( v9 )
        {
          v42 = v9;
          *(_QWORD *)&v29 = v7;
          *((_QWORD *)&v29 + 1) = v8;
          *(_QWORD *)&v35 = &v29;
          *((_QWORD *)&v35 + 1) = sub_14148F3A0;
          *(_QWORD *)&v36 = &v42;
          *((_QWORD *)&v36 + 1) = sub_141490720;
          sub_14149C0F0(&v24, &unk_14174E314, &v35);
          v10 = v45;
          if ( v45 == v43 )
            sub_141689AB0(&v43);
          v11 = v44;
          v12 = 3 * v10;
          *(_QWORD *)(v44 + 8 * v12 + 16) = v25;
          *(_OWORD *)(v11 + 8 * v12) = v24;
          v45 = v10 + 1;
          sub_140018650(&v42);
          v3 = v6;
        }
      }
      else
      {
        v29 = v35;
        v34 = v40;
        v33 = v39;
        v32 = v38;
        v31 = v37;
        v30 = v36;
        if ( (_QWORD)v35 == 2 )
          goto LABEL_11;
        *(_QWORD *)&v29 = v7;
        *((_QWORD *)&v29 + 1) = v8;
        *(_QWORD *)&v35 = &v29;
        *((_QWORD *)&v35 + 1) = sub_14148F3A0;
        sub_14149C0F0(&v26, &unk_14174E323, &v35);
        v13 = v45;
        if ( v45 == v43 )
          sub_141689AB0(&v43);
        v4 = v44;
        v5 = 3 * v13;
        *(_QWORD *)(v44 + 8 * v5 + 16) = v27;
        *(_OWORD *)(v4 + 8 * v5) = v26;
        v45 = v13 + 1;
        v3 -= 64;
      }
    }
  }
  v14 = v28;
  *(_BYTE *)(v28 + 56) = 0;
  v15 = *(_QWORD *)(v14 + 8);
  v16 = *(_QWORD *)(v14 + 16);
  *(_QWORD *)&v35 = sub_141485E40(v15, v16);
  if ( (_QWORD)v35 )
    sub_140018650(&v35);
  v17 = sub_1414740B0(v15, v16);
  if ( v17 )
  {
    *(_QWORD *)&v35 = sub_141485E40(v17, v18);
    if ( (_QWORD)v35 )
      sub_140018650(&v35);
  }
  if ( v45 )
  {
    sub_140440300((unsigned int)&v35, v44, v45, (unsigned int)&aCodeSwitchRoll[35], 3);
    v19 = v41;
    v41[3] = v36;
    *(_OWORD *)(v19 + 1) = v35;
    v20 = v45;
    *v19 = 10;
    if ( v20 )
    {
      v21 = (_QWORD *)(v44 + 8);
      do
      {
        v22 = *(v21 - 1);
        if ( v22 )
          sub_140001660(*v21, v22, 1);
        v21 += 3;
        --v20;
      }
      while ( v20 );
    }
  }
  else
  {
    *v41 = -1;
  }
  result = v43;
  if ( v43 )
    return sub_140001660(v44, 24 * v43, 8);
  return result;
}