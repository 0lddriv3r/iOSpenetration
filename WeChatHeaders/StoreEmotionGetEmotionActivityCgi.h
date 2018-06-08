//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "StoreEmotionBaseCgi.h"

@class NSString;

@interface StoreEmotionGetEmotionActivityCgi : StoreEmotionBaseCgi
{
    NSString *m_activityId;
    NSString *m_md5;
    id <StoreEmotionGetEmotionActivityCgiDelegate> _delegate;
}

@property(nonatomic) __weak id <StoreEmotionGetEmotionActivityCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *md5; // @synthesize md5=m_md5;
@property(readonly, nonatomic) NSString *activityId; // @synthesize activityId=m_activityId;
- (void).cxx_destruct;
- (void)handleErrorReturn;
- (void)handleMessageReturnWithResponse:(id)arg1;
- (BOOL)startRequestWithActivityId:(id)arg1 md5:(id)arg2;
- (id)init;
- (void)dealloc;

@end
