//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface EditVideoReporter : MMObject
{
}

+ (void)editVideoReportCompositionResult:(BOOL)arg1 startTime:(struct timeval)arg2 endTime:(struct timeval)arg3 videoDuration:(unsigned int)arg4 videoStartTime:(unsigned int)arg5 videoEndTime:(unsigned int)arg6;
+ (void)editVideoReportOnEntranceType:(unsigned int)arg1 withClickBtn:(unsigned int)arg2 withEditAttr:(id)arg3 withVideoDuration:(unsigned int)arg4 withCropDuration:(unsigned int)arg5;

@end

