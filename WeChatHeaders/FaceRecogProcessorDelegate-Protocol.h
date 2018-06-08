//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@protocol FaceRecogProcessorDelegate <NSObject>
- (void)faceRecogDidFinishWithTrackFail;
- (void)faceRecogDidFinishWithTimeout;
- (void)procedureDidGotFrameResult:(unsigned int)arg1 failedType:(int)arg2;

@optional
- (void)procedureDidFailedReleaseOutResultData;
- (void)procedureDidStartUploadResultData;
- (void)procedureDidRecognizePoseSuccess:(UIImage *)arg1;
- (void)procedureDidRecognizeFaceSuccess;
@end

