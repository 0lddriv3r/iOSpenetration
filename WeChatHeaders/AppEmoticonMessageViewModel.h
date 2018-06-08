//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

#import "IAPPEmoticonDownloadExt.h"

@class CEmoticonWrap, NSString;

@interface AppEmoticonMessageViewModel : CommonMessageViewModel <IAPPEmoticonDownloadExt>
{
    int _iconType;
    float _currentProgress;
}

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(nonatomic) float currentProgress; // @synthesize currentProgress=_currentProgress;
@property(nonatomic) int iconType; // @synthesize iconType=_iconType;
- (void)onAppEmoticonDownloadFinished:(id)arg1;
- (void)onAppEmoticonDownloading:(id)arg1;
@property(readonly, nonatomic) BOOL isDownloading;
@property(readonly, nonatomic) BOOL isDownloaded;
@property(readonly, nonatomic) CEmoticonWrap *emoticonWrap;
- (id)additionalAccessibilityDescription;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

