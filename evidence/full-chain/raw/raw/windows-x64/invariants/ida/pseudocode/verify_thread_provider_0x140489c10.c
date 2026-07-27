// module: codexmate_lib/core/relay/invariants
// addr: 0x140489c10
// name: verify_thread_provider
// win 1.2.3 | = mac codexmate_lib::core::relay::invariants::verify_thread_provider | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall verify_thread_provider(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  _BYTE v9[40]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]
  __int64 v13; // [rsp+78h] [rbp-8h] BYREF
  __int64 v14; // [rsp+80h] [rbp+0h] BYREF
  __int64 v15; // [rsp+88h] [rbp+8h] BYREF
  __int64 v16; // [rsp+90h] [rbp+10h] BYREF
  _QWORD v17[3]; // [rsp+98h] [rbp+18h] BYREF
  __int128 v18; // [rsp+B0h] [rbp+30h] BYREF
  __int64 *v19; // [rsp+C0h] [rbp+40h]
  __int64 (__fastcall *v20)(); // [rsp+C8h] [rbp+48h]
  __int64 *v21; // [rsp+D0h] [rbp+50h]
  __int64 (__fastcall *v22)(); // [rsp+D8h] [rbp+58h]
  __int64 *v23; // [rsp+E0h] [rbp+60h]
  __int64 (__fastcall *v24)(); // [rsp+E8h] [rbp+68h]
  __int64 *v25; // [rsp+F0h] [rbp+70h]
  __int64 (__fastcall *v26)(); // [rsp+F8h] [rbp+78h]
  _QWORD *v27; // [rsp+100h] [rbp+80h]
  __int64 (__fastcall *v28)(); // [rsp+108h] [rbp+88h]
  __int128 *v29; // [rsp+110h] [rbp+90h]
  __int64 (__fastcall *v30)(_QWORD, _QWORD); // [rsp+118h] [rbp+98h]
  _QWORD v31[2]; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v32; // [rsp+130h] [rbp+B0h]
  __int64 v33; // [rsp+138h] [rbp+B8h]
  __int128 v34; // [rsp+140h] [rbp+C0h] BYREF
  __int64 *v35; // [rsp+150h] [rbp+D0h]
  __int64 v36; // [rsp+160h] [rbp+E0h]

  v36 = -2;
  sub_1404C22C0(v9, a1, a2, 6);
  if ( v13 || v14 || v15 || v16 || v10 )
  {
    if ( v12 )
    {
      sub_140440300((unsigned int)&v18, v11, v12, (unsigned int)&unk_141759861, 3);
      v35 = v19;
      v34 = v18;
      v31[0] = &v34;
      v31[1] = sub_1400015F0;
      sub_14149C0F0(&v18, &unk_141759864, v31);
      if ( (_QWORD)v34 )
        sub_140001660(*((_QWORD *)&v34 + 1), v34, 1);
      v34 = v18;
      v35 = v19;
    }
    else
    {
      *(_QWORD *)&v34 = 0;
      *((_QWORD *)&v34 + 1) = 1;
      v35 = nullptr;
    }
    v31[0] = v10;
    *(_QWORD *)&v18 = v9;
    *((_QWORD *)&v18 + 1) = sub_1400015F0;
    v19 = &v13;
    v20 = sub_1414AC520;
    v21 = &v14;
    v22 = sub_1414AC520;
    v23 = &v15;
    v24 = sub_1414AC520;
    v25 = &v16;
    v26 = sub_1414AC520;
    v27 = v31;
    v28 = sub_1414AC520;
    v29 = &v34;
    v30 = sub_1400015F0;
    sub_14149C0F0(v17, &unk_141759871, &v18);
    v33 = v17[0];
    v32 = v17[1];
    v4 = v17[2];
    v5 = a3[2];
    if ( v5 == *a3 )
      sub_1416890A0(a3);
    v6 = a3[1];
    v7 = 32 * v5;
    *(_QWORD *)(v6 + v7) = v33;
    *(_QWORD *)(v6 + v7 + 8) = v32;
    *(_QWORD *)(v6 + v7 + 16) = v4;
    *(_BYTE *)(v6 + v7 + 24) = 3;
    a3[2] = v5 + 1;
    if ( (_QWORD)v34 )
      sub_140001660(*((_QWORD *)&v34 + 1), v34, 1);
  }
  return sub_14043F590(v9);
}