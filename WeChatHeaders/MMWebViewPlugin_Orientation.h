//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWebViewPluginBase.h"

@interface MMWebViewPlugin_Orientation : MMWebViewPluginBase
{
    int _orientationBeforeSet;
    int _orientationSet;
    int _setFlag;
}

@property(nonatomic) int setFlag; // @synthesize setFlag=_setFlag;
@property(nonatomic) int orientationSet; // @synthesize orientationSet=_orientationSet;
@property(nonatomic) int orientationBeforeSet; // @synthesize orientationBeforeSet=_orientationBeforeSet;
- (void)handleClosePage:(id)arg1;
- (BOOL)handleEvent:(unsigned int)arg1 userInfo:(id)arg2;
- (void)setDeviceOrientation:(int)arg1;
- (BOOL)setToOrientation:(int)arg1;
- (id)init;

@end

