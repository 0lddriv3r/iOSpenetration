//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

@class NSString;

@interface FaceRecogBaseViewController : MMUIViewController
{
    BOOL _showSuccessBtn;
    NSString *_loadingTip;
    NSString *_okTip;
}

@property(nonatomic) BOOL showSuccessBtn; // @synthesize showSuccessBtn=_showSuccessBtn;
@property(retain, nonatomic) NSString *okTip; // @synthesize okTip=_okTip;
@property(retain, nonatomic) NSString *loadingTip; // @synthesize loadingTip=_loadingTip;
- (void).cxx_destruct;
- (void)procedureDidFailed:(id)arg1 canRetry:(BOOL)arg2;
- (void)procedureDidFinish;
- (void)procedureDidGotFrameResult:(id)arg1 currentMotionType:(unsigned int)arg2 failedType:(int)arg3;
- (void)attachPreviewLayer:(id)arg1;

@end
