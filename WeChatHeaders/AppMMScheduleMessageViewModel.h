//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class AppMMScheduleItem;

@interface AppMMScheduleMessageViewModel : CommonMessageViewModel
{
    AppMMScheduleItem *_scheduleItem;
    float _contentWidth;
}

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(nonatomic) float contentWidth; // @synthesize contentWidth=_contentWidth;
@property(retain, nonatomic) AppMMScheduleItem *scheduleItem; // @synthesize scheduleItem=_scheduleItem;
- (void).cxx_destruct;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

