//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VOIPSettingUtil : NSObject
{
}

+ (int)FrontMicCheckAndSetConfig:(int)arg1 enbleConfig:(int)arg2 playVolume:(int)arg3;
+ (id)getParamOfKey:(id)arg1 defaultVal:(id)arg2;
+ (BOOL)saveParams:(id)arg1;
+ (id)getVoipSettingConfinPath;
+ (id)getVoipSettingConfigRootDir;
+ (int)getMicPortChange;
+ (id)getVoipSettingParam;

@end
