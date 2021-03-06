//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CEmoticonWrap, EditImageAttr, EditVideoAttr, MMUIViewController, MsgSendOpEntry, NSArray, NSData, NSString, NSURL, ServiceAppData, UIImage;

@protocol MMInputToolViewDelegate <NSObject>

@optional
- (void)onWeAppSessionMsgBtnClick:(NSData *)arg1;
- (void)onWeAppSessionMsgBtnHide;
- (BOOL)isHiddenInputChangeButton;
- (void)onToolViewDidMoveToWindow;
- (BOOL)shouldHideToolViewOnKeyboardHide;
- (BOOL)shouldInitWXEmoticonView;
- (void)keyboardWillHide;
- (MMUIViewController *)GetCurrentViewController;
- (void)initAllowNameCardFollowRedEnvelope;
- (void)initAllowWxTalkFollowSight;
- (void)initAllowShareCard;
- (void)initAllowRecommendApp;
- (void)initAllowMultiTalk;
- (void)initAllowWxTalk;
- (void)initAllowVoiceInput;
- (void)initAllowVoip;
- (BOOL)isViewControllerAnimated;
- (BOOL)ShouldShowKeyboardAnimation;
- (void)onTextDeleteAll;
- (void)sendCaptruedImage:(NSURL *)arg1;
- (void)pasteImage:(UIImage *)arg1;
- (NSString *)getCurrentChatName;
- (void)redEnvelopesLogic;
- (void)transferMoneyLogic;
- (void)openServiceAppListController;
- (BOOL)hasGroupPayEntry;
- (BOOL)hasCardPkgEntry;
- (BOOL)hasRedEnvelopesEntry;
- (BOOL)hasTransferMoneyEntry;
- (BOOL)hasServiceEntry;
- (NSArray *)getServiceAppList;
- (NSArray *)getAttachmentViewServiceAppList;
- (void)openServiceApp:(ServiceAppData *)arg1;
- (void)onStreamVoiceInputButtonClick;
- (NSString *)chatUserNameForSightStatistics;
- (void)onGroupPayButtonClick;
- (void)onOpenMyCardPkgViewController;
- (void)openMyFavoritesListController;
- (void)openEnterpriseBrandEntry;
- (BOOL)canShowEnterpriseBrandEntry;
- (BOOL)canShowLocation;
- (BOOL)canShowFavEntry;
- (BOOL)canShowFileBrowser;
- (BOOL)canShowSight;
- (void)onOpenTrackRoom:(unsigned int)arg1;
- (BOOL)shouldShowOpenTrackRoom;
- (void)onSelectLocation;
- (void)onVideoVoipInvite;
- (void)onVoipInvite;
- (void)onMultiTalkButtonClick;
- (void)onShareCard;
- (void)SendEmoticonMesssageToolView:(CEmoticonWrap *)arg1;
- (void)TextDidChanged:(NSString *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)onSightPictureTaken:(UIImage *)arg1 imageData:(NSData *)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(EditImageAttr *)arg4;
- (void)onShortVideoTaken:(NSString *)arg1 thumbImg:(UIImage *)arg2 sentImmediately:(BOOL)arg3 isMuted:(BOOL)arg4 editVideoAttr:(EditVideoAttr *)arg5;
- (void)openCameraController;
- (void)openFileBrowser;
- (void)openMediaBrowser;
- (void)CancelRecording;
- (void)StopRecording;
- (BOOL)StartRecording;
- (void)onPositionModeChangeTo:(int)arg1 Animated:(BOOL)arg2;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(char *)arg1;
- (void)ToolViewPositionDidChanged:(BOOL)arg1 animated:(BOOL)arg2;
- (void)SendEmojiArtMessageToolView:(NSString *)arg1;
- (void)SendTextMessageToolView:(NSString *)arg1;
- (MsgSendOpEntry *)getMsgSendOpEntry;
@end

