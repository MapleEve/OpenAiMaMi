use serde_json::Value;

#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) struct ParsedChatGptSessionAccount {
    pub account_key: Option<String>,
    pub email: Option<String>,
    pub plan: Option<String>,
    pub refresh_token_placeholder: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) enum ChatGptSessionAccountParseError {
    InvalidJson,
    MissingAccountFields,
}

/// 只读解析 ChatGPT session JSON，不返回任何 token 原文。
pub(crate) fn parse_chatgpt_session_account(
    session_json: &str,
) -> Result<ParsedChatGptSessionAccount, ChatGptSessionAccountParseError> {
    let value = serde_json::from_str::<Value>(session_json)
        .map_err(|_| ChatGptSessionAccountParseError::InvalidJson)?;

    let account_key = find_string_field(&value, &["account_id", "accountId", "accountKey"]);
    let email = find_string_field(&value, &["email"]);
    let plan = find_string_field(&value, &["plan"]);
    let has_access_token =
        find_string_field(&value, &["accessToken", "access_token", "token"]).is_some();
    let has_refresh_token = find_string_field(&value, &["refreshToken", "refresh_token"]).is_some();
    let has_id_token = find_string_field(&value, &["idToken", "id_token"]).is_some();
    let refresh_token_placeholder = has_refresh_token;

    if account_key.is_none()
        && email.is_none()
        && plan.is_none()
        && !has_access_token
        && !has_refresh_token
        && !has_id_token
    {
        return Err(ChatGptSessionAccountParseError::MissingAccountFields);
    }

    Ok(ParsedChatGptSessionAccount {
        account_key,
        email,
        plan,
        refresh_token_placeholder,
    })
}

fn find_string_field(value: &Value, keys: &[&str]) -> Option<String> {
    read_string_field(value, keys)
        .or_else(|| find_in_named_container(value, keys, "user"))
        .or_else(|| find_in_named_container(value, keys, "account"))
        .or_else(|| find_in_named_container(value, keys, "session"))
        .or_else(|| find_in_named_container(value, keys, "auth"))
}

fn find_in_named_container(value: &Value, keys: &[&str], container: &str) -> Option<String> {
    match value {
        Value::Object(map) => map
            .get(container)
            .and_then(|nested| find_string_field(nested, keys))
            .or_else(|| {
                map.values()
                    .find_map(|nested| find_in_named_container(nested, keys, container))
            }),
        Value::Array(items) => items
            .iter()
            .find_map(|nested| find_in_named_container(nested, keys, container)),
        _ => None,
    }
}

fn read_string_field(value: &Value, keys: &[&str]) -> Option<String> {
    let map = value.as_object()?;
    keys.iter()
        .filter_map(|key| map.get(*key))
        .filter_map(Value::as_str)
        .map(str::trim)
        .find(|text| !text.is_empty())
        .map(ToOwned::to_owned)
}
