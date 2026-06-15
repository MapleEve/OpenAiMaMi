use crate::core::error::CoreError;
use crate::core::model::custom_instructions::{
    CustomInstructionProtection, ParsedCustomInstructionBlock,
};

pub(crate) const MANAGED_START_MARKER: &str = "<!-- AIMAMI_CUSTOM_INSTRUCTIONS_START -->";
pub(crate) const MANAGED_END_MARKER: &str = "<!-- AIMAMI_CUSTOM_INSTRUCTIONS_END -->";

pub(crate) fn parse_managed_block(
    file_exists: bool,
    raw_content: String,
) -> ParsedCustomInstructionBlock {
    let start_positions: Vec<usize> = raw_content
        .match_indices(MANAGED_START_MARKER)
        .map(|(index, _)| index)
        .collect();
    let end_positions: Vec<usize> = raw_content
        .match_indices(MANAGED_END_MARKER)
        .map(|(index, _)| index)
        .collect();

    if start_positions.is_empty() && end_positions.is_empty() {
        return ParsedCustomInstructionBlock {
            file_exists,
            protection_state: CustomInstructionProtection::Unmanaged,
            issue_message: None,
            managed_block_present: false,
            managed_content: String::new(),
            raw_content,
            block_start: None,
            block_end: None,
        };
    }

    if start_positions.len() != 1
        || end_positions.len() != 1
        || end_positions[0] < start_positions[0]
    {
        return ParsedCustomInstructionBlock {
            file_exists,
            protection_state: CustomInstructionProtection::Protected,
            issue_message: Some(
                "检测到重复、不完整或顺序异常的 AiMaMi 自定义指令标记，请先手动修复全局 AGENTS 文件。"
                    .to_string(),
            ),
            managed_block_present: false,
            managed_content: String::new(),
            raw_content,
            block_start: None,
            block_end: None,
        };
    }

    let block_start = start_positions[0];
    let block_end_marker_start = end_positions[0];
    let content_start = block_start + MANAGED_START_MARKER.len();
    let managed_content = raw_content[content_start..block_end_marker_start]
        .trim_matches('\n')
        .to_string();

    ParsedCustomInstructionBlock {
        file_exists,
        protection_state: CustomInstructionProtection::Ready,
        issue_message: None,
        managed_block_present: true,
        managed_content,
        raw_content,
        block_start: Some(block_start),
        block_end: Some(block_end_marker_start + MANAGED_END_MARKER.len()),
    }
}

pub(crate) fn ensure_not_protected(parsed: &ParsedCustomInstructionBlock) -> Result<(), CoreError> {
    if parsed.protection_state == CustomInstructionProtection::Protected {
        return Err(CoreError::InvalidInput(
            parsed
                .issue_message
                .clone()
                .unwrap_or_else(|| "全局 AGENTS 文件处于保护状态".to_string()),
        ));
    }
    Ok(())
}

pub(crate) fn compose_with_managed_content(
    parsed: &ParsedCustomInstructionBlock,
    content: &str,
) -> String {
    let normalized = normalize_managed_content(content);
    let rendered = render_managed_block(&normalized);

    if let (Some(start), Some(end)) = (parsed.block_start, parsed.block_end) {
        let mut next = String::new();
        next.push_str(&parsed.raw_content[..start]);
        next.push_str(&rendered);
        next.push_str(&parsed.raw_content[end..]);
        return next;
    }

    if parsed.raw_content.trim().is_empty() {
        return rendered;
    }

    let mut next = parsed.raw_content.clone();
    if !next.ends_with('\n') {
        next.push('\n');
    }
    if !next.ends_with("\n\n") {
        next.push('\n');
    }
    next.push_str(&rendered);
    next
}

pub(crate) fn clear_managed_content(parsed: &ParsedCustomInstructionBlock) -> String {
    let (Some(start), Some(end)) = (parsed.block_start, parsed.block_end) else {
        return parsed.raw_content.clone();
    };
    let before = parsed.raw_content[..start].trim_end_matches('\n');
    let after = parsed.raw_content[end..].trim_start_matches('\n');

    if before.is_empty() && after.is_empty() {
        String::new()
    } else if before.is_empty() {
        after.to_string()
    } else if after.is_empty() {
        format!("{before}\n")
    } else {
        format!("{before}\n\n{after}")
    }
}

pub(crate) fn normalize_managed_content(content: &str) -> String {
    content.trim().trim_matches('\n').to_string()
}

pub(crate) fn validate_managed_content(content: &str) -> Result<(), CoreError> {
    if content.contains(MANAGED_START_MARKER) || content.contains(MANAGED_END_MARKER) {
        return Err(CoreError::InvalidInput(
            "自定义指令内容不能包含 AiMaMi 受控区块标记。".to_string(),
        ));
    }
    Ok(())
}

fn render_managed_block(content: &str) -> String {
    if content.is_empty() {
        format!("{MANAGED_START_MARKER}\n{MANAGED_END_MARKER}\n")
    } else {
        format!("{MANAGED_START_MARKER}\n{content}\n{MANAGED_END_MARKER}\n")
    }
}
