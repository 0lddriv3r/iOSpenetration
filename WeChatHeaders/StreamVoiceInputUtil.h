//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface StreamVoiceInputUtil : MMObject
{
}

+ (BOOL)ifStreamVoiceInputMMVoipVadOn;
+ (id)genSessionId;
+ (id)genVoiceId:(id)arg1;
+ (id)genAudioBufferFromInputId:(unsigned long)arg1 offset:(unsigned long)arg2 length:(unsigned long)arg3;
+ (id)tempAudioFilePath:(unsigned long)arg1;
+ (id)tempAudioFileFolderPath;

@end

