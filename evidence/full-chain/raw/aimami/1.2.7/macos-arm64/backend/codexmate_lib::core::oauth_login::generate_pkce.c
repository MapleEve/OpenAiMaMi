// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::oauth_login::generate_pkce::ha1157db5e9c6c392; addr: 0x1004cc8c0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:18Z
// B-level evidence identity verified; module codexmate_lib/core/oauth_login; range 0x1004cc8c0-0x1004cc98c; sha f019dbc8e267; session <审计会话>; method exact-normalized-body; source intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-offline-writeback-plan.json; not gate promotion
// [release-semantic-writeback <审计会话> 0x1004cc8c0]
// source binary SHA256=f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0；仅macOS release当前语义，非Windows证明、非gate提升。
// [accounts-content-analysis / digest-helper-extraction-confirmed-algorithm-level] PKCE异常的SHA256调用边由内联compress256变为通用Digest helper，不能从compress256消失推断摘要算法被删除。 分组证据：release owner生成两个Uu
// id v4的Simple格式串，Digest::digest写32字节，然后用包含-_/URL-safe字母表的base64 engine编码。；新digest helper正文初始化SHA256状态并调用sha2::sha256::compress256；pre调用字段也含sha2::sha256::compress256。；pre generate_pk
// ce完整体缺失，故只闭合摘要算法外提，未证明pre verifier拼接与base64选项的全部细节。
// 副作用边界："随机数获取和临时内存；未执行登录、未提取任何真实凭据。"
// 限制：非整函数逐路径等价证明。
// 输入清单=<内部存储>/intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-module-semantic-writeback-input.json sha256=38adf8f79ecb9e027
// 4206dd853ade3eef7cc9003b68d1e289ab88947f776436e
_QWORD *__fastcall codexmate_lib::core::oauth_login::generate_pkce::ha1157db5e9c6c392(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __m128i v4[2]; // [rsp+8h] [rbp-A8h] BYREF
  _BYTE v5[16]; // [rsp+28h] [rbp-88h] BYREF
  _BYTE v6[16]; // [rsp+38h] [rbp-78h] BYREF
  _QWORD v7[4]; // [rsp+48h] [rbp-68h] BYREF
  _QWORD v8[3]; // [rsp+68h] [rbp-48h] BYREF
  __int64 v9; // [rsp+80h] [rbp-30h] BYREF
  char *v10; // [rsp+88h] [rbp-28h]
  size_t v11; // [rsp+90h] [rbp-20h]

  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v6); /*0x1004cc8da*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v5); /*0x1004cc8e9*/
  v7[0] = v6; /*0x1004cc8ee*/
  v7[1] = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2; /*0x1004cc8f9*/
  v7[2] = v5; /*0x1004cc8fd*/
  v7[3] = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2; /*0x1004cc901*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v9, &anon_90096945ae5392e7faa4fe68e375fd44_112, v7); /*0x1004cc914*/
  _$LT$D$u20$as$u20$digest..digest..Digest$GT$::digest::h648f3d1979174620(v4, v10, v11); /*0x1004cc92b*/
  base64::engine::Engine::encode::inner::h59db3384b98c4e1d(v8, &anon_90096945ae5392e7faa4fe68e375fd44_113, v4, 32); /*0x1004cc947*/
  a1[2] = v11; /*0x1004cc950*/
  v1 = v9; /*0x1004cc954*/
  a1[1] = v10; /*0x1004cc95c*/
  *a1 = v1; /*0x1004cc960*/
  v2 = v8[1]; /*0x1004cc967*/
  a1[3] = v8[0]; /*0x1004cc96b*/
  a1[4] = v2; /*0x1004cc96f*/
  a1[5] = v8[2]; /*0x1004cc977*/
  return a1; /*0x1004cc97e*/
}