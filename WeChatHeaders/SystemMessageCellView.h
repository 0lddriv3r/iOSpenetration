//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageCellView.h"

#import "ChatBackgroundExt.h"
#import "ILinkEventExt.h"

@class NSString, RichTextView, SystemMessageViewModel, UIImageView;

@interface SystemMessageCellView : BaseMessageCellView <ILinkEventExt, ChatBackgroundExt>
{
    UIImageView *m_bgImageView;
    RichTextView *m_richTextView;
    BOOL _useLightStyle;
}

@property(nonatomic) BOOL useLightStyle; // @synthesize useLightStyle=_useLightStyle;
- (void).cxx_destruct;
- (void)onChatBackgroundChanged:(id)arg1;
- (BOOL)accessibilityActivate;
- (BOOL)isAccessibilityElement;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLongTouch;
- (void)layoutContentView;
- (BOOL)needUpdateLightStyle;
- (void)updateStatus;
- (BOOL)canBeReused;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SystemMessageViewModel *viewModel; // @dynamic viewModel;

@end
