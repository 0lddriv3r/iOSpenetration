//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSDictionary, NSMutableArray, NSString;

@interface FaceRecog3rdVerifyConfirmLogic : MMObject <PBMessageObserverDelegate>
{
    BOOL _bDefaultConfirm;
    id <FaceRecog3rdVerifyConfirmLogicDelegate> _delegate;
    NSMutableArray *_confirmInfos;
    NSDictionary *_prompts;
    NSString *_bizNickName;
    NSString *_headerPromptWording;
    NSString *_feedbackUrl;
    NSString *_feedbackUrlForConfirmView;
}

@property(nonatomic) BOOL bDefaultConfirm; // @synthesize bDefaultConfirm=_bDefaultConfirm;
@property(copy, nonatomic) NSString *feedbackUrlForConfirmView; // @synthesize feedbackUrlForConfirmView=_feedbackUrlForConfirmView;
@property(copy, nonatomic) NSString *feedbackUrl; // @synthesize feedbackUrl=_feedbackUrl;
@property(copy, nonatomic) NSString *headerPromptWording; // @synthesize headerPromptWording=_headerPromptWording;
@property(copy, nonatomic) NSString *bizNickName; // @synthesize bizNickName=_bizNickName;
@property(retain, nonatomic) NSDictionary *prompts; // @synthesize prompts=_prompts;
@property(retain, nonatomic) NSMutableArray *confirmInfos; // @synthesize confirmInfos=_confirmInfos;
@property(nonatomic) __weak id <FaceRecog3rdVerifyConfirmLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleGetConfirmInfo:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (BOOL)startGetConfirmInfo:(id)arg1 verifyInfo:(id)arg2;
- (void)resetLogicState;
- (void)dealloc;
- (id)init;

@end
