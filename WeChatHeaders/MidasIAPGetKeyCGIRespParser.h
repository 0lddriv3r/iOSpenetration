//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MidasIAPCommonCGIRespParser.h"

@class MidasKeyStore;

@interface MidasIAPGetKeyCGIRespParser : MidasIAPCommonCGIRespParser
{
    int _b;
    MidasKeyStore *_keyStore;
}

- (void).cxx_destruct;
- (void)setB:(BOOL)arg1;
- (void)parse;
- (void)dealloc;
- (id)initWithJSONDict:(id)arg1;
- (id)initWithJSONDict:(id)arg1 base:(BOOL)arg2 keyStore:(id)arg3;

@end
