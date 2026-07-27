// module: codexmate_lib/core/relay/codex_project_state
// addr: 0x140499210
// name: stability_issue
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_project_state::stability_issue | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall stability_issue(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(); // rax
  __int64 v6; // rcx
  __int128 v8; // [rsp+28h] [rbp-48h] BYREF
  __int64 v9; // [rsp+38h] [rbp-38h]
  __int128 v10; // [rsp+40h] [rbp-30h] BYREF
  __int128 *v11; // [rsp+50h] [rbp-20h] BYREF
  __int64 (__fastcall *v12)(); // [rsp+58h] [rbp-18h]
  __int64 v13; // [rsp+60h] [rbp-10h]
  __int64 v14; // [rsp+68h] [rbp-8h]

  v14 = -2;
  if ( *(_QWORD *)(a2 + 80) == -1 )
  {
    v3 = *(_QWORD *)(a2 + 48);
    if ( v3 )
    {
      sub_140440300((unsigned int)&v11, *(_QWORD *)(a2 + 40), v3, (unsigned int)&unk_141758CC9, 3);
      *(_QWORD *)&v10 = &v11;
      *((_QWORD *)&v10 + 1) = sub_1400015F0;
      sub_14149C0F0(&v8, &unk_14175A7EB, &v10);
      if ( v11 )
        sub_140001660(v12, v11, 1);
      *(_QWORD *)(a1 + 16) = v9;
      *(_OWORD *)a1 = v8;
    }
    else if ( *(_BYTE *)(a2 + 234) )
    {
      if ( *(_QWORD *)(a2 + 136) == -1 )
      {
        nullsub_1(a1);
        v4 = 35;
        v5 = (__int64 (__fastcall *)())sub_140001650(35, 1);
        if ( !v5 )
          sub_1416C2D4B(1, 35);
        qmemcpy(v5, "Codex project index requires repair", 35);
        v6 = 35;
      }
      else
      {
        sub_14149C500(&v11, a2 + 136);
        v4 = (__int64)v11;
        v5 = v12;
        v6 = v13;
      }
      *(_QWORD *)a1 = v4;
      *(_QWORD *)(a1 + 8) = v5;
      *(_QWORD *)(a1 + 16) = v6;
    }
    else
    {
      *(_QWORD *)a1 = -1;
    }
  }
  else
  {
    v10 = *(_OWORD *)(a2 + 88);
    v11 = &v10;
    v12 = sub_14041F680;
    sub_14149C0F0(a1, &unk_14175A814, &v11);
  }
  return a1;
}