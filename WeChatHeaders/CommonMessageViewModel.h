//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageViewModel.h"

#import "IMsgExt.h"

@interface CommonMessageViewModel : BaseMessageViewModel <IMsgExt>
{
    unsigned int m_bgBubbleType;
    unsigned int m_maskBubbleType;
    BOOL m_isShowChatRoomDisplayName;
}

- (id)accessibilityDescription;
- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (struct CGSize)measure:(struct CGSize)arg1;
- (id)maskBubbleInfo;
- (id)bgBubbleInfo;
- (BOOL)isShowSendFailView;
- (BOOL)isShowSendingView;
- (BOOL)isShowAppMessageBlockButton;
- (id)sourceTag;
- (id)sourceIcon;
- (id)sourceTitle;
- (BOOL)shouldShowSourceViewInContent;
- (BOOL)isShowSourceView;
- (BOOL)calIsShowChatRoomDisplayName;
- (BOOL)isShowChatRoomDisplayName;
- (BOOL)isShowHeadImage;
- (void)updateChatContact:(id)arg1;
- (void)dealloc;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

@end

