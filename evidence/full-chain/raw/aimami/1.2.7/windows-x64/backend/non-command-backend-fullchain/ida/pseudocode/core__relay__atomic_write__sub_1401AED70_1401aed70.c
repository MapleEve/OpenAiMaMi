// win 1.2.7 | module src/core/relay/atomic_write.rs | ea 0x1401aed70 | name sub_1401AED70
// win 1.2.7 | module src/core/relay/atomic_write.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1401AED70(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[12]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v5[4]; // [rsp+88h] [rbp+8h] BYREF
  _QWORD v6[2]; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v7; // [rsp+B8h] [rbp+38h] BYREF
  char v8; // [rsp+C7h] [rbp+47h] BYREF
  __int64 v9; // [rsp+C8h] [rbp+48h]

  v9 = -2;
  v7 = a3;
  if ( *(_QWORD *)off_1421E6EC0 > 1u )
  {
    v6[0] = a1;
    v6[1] = a2;
    v5[0] = v6;
    v5[1] = sub_14169F630;
    v5[2] = &v7;
    v5[3] = sub_1416BB0B0;
    v4[6] = 2;
    v4[7] = aCodexmateLibCo_20;
    v4[8] = 40;
    v4[10] = &unk_1419D6676;
    v4[11] = v5;
    v4[0] = 0;
    v4[1] = aCodexmateLibCo_20;
    v4[2] = 40;
    v4[3] = 0;
    v4[4] = aSrcCoreRelayAt;
    v4[5] = 30;
    v4[9] = 0xF200000001LL;
    sub_1414D53A0(&v8, v4);
    return v7;
  }
  return a3;
}
