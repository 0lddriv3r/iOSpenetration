//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IAppDataExt.h"
#import "MMTransparentButtonDelegate.h"
#import "SelectAttachmentViewDataSource.h"
#import "SelectAttachmentViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UILabel;

@interface SelectAttachmentViewController : MMUIViewController <SelectAttachmentViewDelegate, SelectAttachmentViewDataSource, MMTransparentButtonDelegate, IAppDataExt>
{
    int _iCurSelection;
    id <SelectAttachmentViewControllerDelegate> m_delegate;
    NSArray *m_rcmApps;
    NSArray *m_svcApps;
    BOOL _allowUploadLocation;
    BOOL _allowFavEntry;
    BOOL _allowVideoVoip;
    BOOL _allowShareCard;
    BOOL _allowVoiceVoip;
    BOOL _allowVoiceInput;
    BOOL _bAllocCamera;
    BOOL _allowWxTalk;
    BOOL _allowRecommendApp;
    BOOL _allowWXTalkFollowSight;
    BOOL _allowNameCardFollowRedEnvelope;
    BOOL _allowEnterpriseBrandEntry;
    NSMutableArray *_arrAttachementObjectItems;
    UILabel *m_bottomTipView;
    BOOL allowMultiTalk;
}

@property(nonatomic) BOOL allowEnterpriseBrandEntry; // @synthesize allowEnterpriseBrandEntry=_allowEnterpriseBrandEntry;
@property(nonatomic) BOOL allowMultiTalk; // @synthesize allowMultiTalk;
@property(nonatomic) BOOL allowNameCardFollowRedEnvelope; // @synthesize allowNameCardFollowRedEnvelope=_allowNameCardFollowRedEnvelope;
@property(nonatomic) BOOL allowWXTalkFollowSight; // @synthesize allowWXTalkFollowSight=_allowWXTalkFollowSight;
@property(nonatomic) BOOL allowShareCard; // @synthesize allowShareCard=_allowShareCard;
@property(nonatomic) BOOL allowRecommendApp; // @synthesize allowRecommendApp=_allowRecommendApp;
@property(nonatomic) BOOL allowWxTalk; // @synthesize allowWxTalk=_allowWxTalk;
@property(nonatomic) BOOL allowVoiceInput; // @synthesize allowVoiceInput=_allowVoiceInput;
@property(nonatomic) BOOL allowVoiceVoip; // @synthesize allowVoiceVoip=_allowVoiceVoip;
@property(nonatomic) BOOL allowVideoVoip; // @synthesize allowVideoVoip=_allowVideoVoip;
@property(nonatomic) BOOL allowFavEntry; // @synthesize allowFavEntry=_allowFavEntry;
@property(nonatomic) BOOL allowUploadLocation; // @synthesize allowUploadLocation=_allowUploadLocation;
@property(retain, nonatomic) NSArray *m_svcApps; // @synthesize m_svcApps;
@property(retain, nonatomic) NSArray *m_rcmApps; // @synthesize m_rcmApps;
@property(nonatomic) __weak id <SelectAttachmentViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)setSelectAttachmentViewAccessibility:(BOOL)arg1;
- (void)adjustViewAndNavBarRect;
- (void)OnAppSettingChanged;
- (void)OnNewAppStatusChanged;
- (void)OnAppIconChanged:(id)arg1;
- (void)OnAppRegisterInfoChanged;
- (void)MMTransparentButton_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)descriptionForAttachmentAtIndex:(unsigned long)arg1;
- (id)viewForAttachmentAtIndex:(unsigned long)arg1;
- (void)OnAttachmentClicked:(id)arg1;
- (unsigned int)numberOfCols;
- (unsigned int)numberOfRows;
- (unsigned int)numberOfAttachment;
- (id)getTextAtIndex:(unsigned long)arg1;
- (id)getImageAtIndex:(unsigned long)arg1;
- (id)appIDAtIndex:(unsigned long)arg1;
- (void)viewDidLoad;
- (void)resetView;
- (void)updateView;
- (void)updateBottomTip;
- (void)dealloc;
- (id)init;
- (void)initObjectItem;
- (void)initData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

