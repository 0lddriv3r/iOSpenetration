//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@interface FaceRecogBindVideoLogic : MMObject <PBMessageObserverDelegate>
{
    id <FaceRecogBindVideoLogicDelegate> _delegate;
}

@property(nonatomic) __weak id <FaceRecogBindVideoLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleBindVideo:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (BOOL)startBindVideo:(id)arg1 bioId:(unsigned long long)arg2 videoFileId:(id)arg3 videoAesKey:(id)arg4;
- (void)dealloc;
- (id)init;

@end

