// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140667630
// name: log_route_result
// win 1.2.3 | = mac codexmate_lib::core::relay::proxy_server::log_route_result | 跨平台字符串签名匹配(名↔函数一致)
char __fastcall log_route_result(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const char *a5,
        __int64 a6,
        __int16 a7,
        unsigned __int16 a8,
        __int64 a9,
        __int64 a10)
{
  char result; // al
  _DWORD *v11; // rax
  const char *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  _BYTE v24[24]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v25; // [rsp+48h] [rbp-38h] BYREF
  _QWORD *v26; // [rsp+58h] [rbp-28h]
  __int64 (__fastcall *v27)(); // [rsp+60h] [rbp-20h]
  _QWORD *v28; // [rsp+68h] [rbp-18h]
  __int64 (__fastcall *v29)(); // [rsp+70h] [rbp-10h]
  __int64 *v30; // [rsp+78h] [rbp-8h]
  __int64 (__fastcall *v31)(_QWORD, _QWORD); // [rsp+80h] [rbp+0h]
  __int128 *v32; // [rsp+88h] [rbp+8h]
  __int64 (__fastcall *v33)(_QWORD, _QWORD); // [rsp+90h] [rbp+10h]
  _QWORD v34[2]; // [rsp+98h] [rbp+18h] BYREF
  _QWORD v35[2]; // [rsp+A8h] [rbp+28h] BYREF
  _QWORD v36[2]; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v37; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v38; // [rsp+D0h] [rbp+50h]
  __int64 v39; // [rsp+D8h] [rbp+58h]
  __int128 v40; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v41; // [rsp+F0h] [rbp+70h]
  __int64 v42; // [rsp+100h] [rbp+80h]

  v42 = -2;
  v36[0] = a1;
  v36[1] = a2;
  v35[0] = a3;
  v35[1] = a4;
  result = a7 == 0;
  LOBYTE(a1) = a9 == 0;
  if ( a9 != 0 || a7 != 0 )
  {
    if ( a9 )
    {
      sub_140AE70B0(&v25, a9, a10);
      v41 = (__int64)v26;
      v40 = v25;
    }
    else
    {
      nullsub_1(a1);
      v11 = (_DWORD *)sub_140001650(4, 1);
      if ( !v11 )
        sub_1416C2D4B(1, 4);
      *v11 = 1701736302;
      *(_QWORD *)&v40 = 4;
      *((_QWORD *)&v40 + 1) = v11;
      v41 = 4;
    }
    v12 = "none";
    if ( a5 )
      v12 = a5;
    v13 = 4;
    if ( a5 )
      v13 = a6;
    v34[0] = v12;
    v34[1] = v13;
    if ( a7 == 1 )
    {
      v14 = sub_14149FF60(a8, &v25, 5);
      v17 = v15;
      if ( v15 < 0 )
      {
        v18 = 0;
        goto LABEL_13;
      }
      if ( v15 )
      {
        v20 = v14;
        nullsub_1(v16);
        v18 = 1;
        v21 = sub_140001650(v17, 1);
        if ( !v21 )
LABEL_13:
          sub_1416C2D4B(v18, v17);
        v22 = v20;
        v23 = v21;
        sub_141684120(v21, v22, v17);
        v19 = v23;
      }
      else
      {
        v19 = 1;
      }
    }
    else
    {
      nullsub_1(v12);
      v17 = 4;
      v19 = sub_140001650(4, 1);
      if ( !v19 )
        sub_1416C2D4B(1, 4);
      *(_DWORD *)v19 = 1701736302;
    }
    v37 = v17;
    v38 = v19;
    v39 = v17;
    *(_QWORD *)&v25 = v36;
    *((_QWORD *)&v25 + 1) = sub_14041F680;
    v26 = v35;
    v27 = sub_14041F680;
    v28 = v34;
    v29 = sub_14041F680;
    v30 = &v37;
    v31 = sub_1400015F0;
    v32 = &v40;
    v33 = sub_1400015F0;
    sub_14149C0F0(v24, &unk_14177C436, &v25);
    if ( v37 )
      sub_140001660(v38, v37, 1);
    result = sub_1403565C0((unsigned int)aCodexRoute, 11, (unsigned int)aCompleted_0, 9, (__int64)v24);
    if ( (_QWORD)v40 )
      return sub_140001660(*((_QWORD *)&v40 + 1), v40, 1);
  }
  return result;
}