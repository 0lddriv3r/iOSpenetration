//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@interface AppMusicMessageViewModel : CommonMessageViewModel
{
    float m_titleHeight;
    float m_detailHeight;
}

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(readonly, nonatomic) float detailHeight; // @synthesize detailHeight=m_detailHeight;
@property(readonly, nonatomic) float titleHeight; // @synthesize titleHeight=m_titleHeight;
- (void)onMessageDownloadThumbImageOK;
- (id)additionalAccessibilityDescription;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

