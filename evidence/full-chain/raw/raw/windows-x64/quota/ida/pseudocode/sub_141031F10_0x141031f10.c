// module: codexmate_lib/core/relay/quota
// addr: 0x141031f10
// name: sub_141031F10
// win 1.2.1 | module src/core/relay/quota.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_141031F10(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rdi
  const char *v4; // rdx
  __int64 v5; // r8
  __int16 v6; // ax
  const char *v7; // rdx
  char v8; // cl
  char result; // al
  __int128 *v10; // [rsp+20h] [rbp-78h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+28h] [rbp-70h]
  __int64 *v12; // [rsp+30h] [rbp-68h]
  __int64 (__fastcall *v13)(); // [rsp+38h] [rbp-60h]
  __int128 *v14; // [rsp+40h] [rbp-58h]
  __int64 (__fastcall *v15)(); // [rsp+48h] [rbp-50h]
  __int64 v16; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+58h] [rbp-40h] BYREF
  __int128 v18; // [rsp+68h] [rbp-30h] BYREF
  _QWORD v19[4]; // [rsp+78h] [rbp-20h] BYREF

  v3 = *a1;
  switch ( *(_WORD *)(*a1 + 88) )
  {
    case 0:
      v4 = aBuilderError_0;
      v5 = 13;
      goto LABEL_13;
    case 1:
      v4 = aErrorSendingRe_1;
      v5 = 21;
      goto LABEL_13;
    case 2:
      v4 = aErrorFollowing_0;
      v5 = 24;
      goto LABEL_13;
    case 3:
      v16 = v3 + 90;
      v6 = *(_WORD *)(v3 + 90);
      v7 = aHttpStatusServ_0;
      if ( (unsigned __int16)(v6 - 400) < 0x64u )
        v7 = (const char *)&unk_141838B12;
      v17[0] = v7;
      v17[1] = 24;
      if ( *(_QWORD *)(v3 + 96) )
      {
        v19[0] = (char *)&unk_141838B2A + 3 * (unsigned __int16)(v6 - 100);
        v19[1] = 3;
        v18 = *(_OWORD *)(v3 + 104);
        v10 = (__int128 *)v17;
        v11 = sub_14041F680;
        v12 = v19;
        v13 = sub_14041F680;
        v14 = &v18;
        v15 = sub_141073990;
        if ( (unsigned __int8)sub_1414A2FC0(*a2, a2[1], &unk_1418395B6, &v10) )
          return 1;
      }
      else
      {
        v10 = (__int128 *)v17;
        v11 = sub_14041F680;
        v12 = &v16;
        v13 = sub_140EE85C0;
        if ( (unsigned __int8)sub_1414A2FC0(*a2, a2[1], &unk_1418395C1, &v10) )
          return 1;
      }
LABEL_14:
      if ( *(_QWORD *)v3 == -1 )
        return 0;
      *(_QWORD *)&v18 = v3;
      v10 = &v18;
      v11 = sub_1406B5450;
      return sub_1414A2FC0(*a2, a2[1], &unk_14183961D, &v10);
    case 4:
      v4 = aRequestOrRespo_0;
      v5 = 30;
      goto LABEL_13;
    case 5:
      v4 = aErrorDecodingR_0;
      v5 = 28;
      goto LABEL_13;
    case 6:
      v4 = aErrorUpgrading_0;
      v5 = 26;
LABEL_13:
      v8 = sub_1414A26B0(a2, v4, v5);
      result = 1;
      if ( !v8 )
        goto LABEL_14;
      return result;
  }
}