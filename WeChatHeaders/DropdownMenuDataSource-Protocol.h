//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DropdownMenu, NSString;

@protocol DropdownMenuDataSource <NSObject>
- (NSString *)dropdownMenu:(DropdownMenu *)arg1 titleForSubmenu:(unsigned int)arg2;
- (unsigned int)numberOfSubmenuInDropdownMenu:(DropdownMenu *)arg1;
@end
