//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMovieCompressor, NSString, UIImage;

@protocol MMovieCompressorDelegate <NSObject>

@optional
- (void)mMovieCompressor:(MMovieCompressor *)arg1 onMovieCompressFinished:(NSString *)arg2 thumbImg:(UIImage *)arg3 ret:(unsigned long)arg4;
- (void)mMovieCompressor:(MMovieCompressor *)arg1 onMovieCompressFailed:(unsigned long)arg2;
@end

