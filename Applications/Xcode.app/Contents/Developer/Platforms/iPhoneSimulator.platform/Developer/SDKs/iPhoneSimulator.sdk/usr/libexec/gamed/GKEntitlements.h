//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GKEntitlements : NSObject
{
    unsigned long long _entitlements;
}

- (_Bool)_shouldBypasAuthenticationForConnection:(id)arg1;
- (_Bool)hasAnyPrivateEntitlement;
- (_Bool)hasAnyEntitlement;
- (_Bool)hasEntitlements:(unsigned long long)arg1;
- (id)initWithConnection:(id)arg1;
- (unsigned long long)_valuesForEntitlement:(id)arg1 forConnection:(id)arg2;
- (id)description;
- (unsigned long long)_entitlementForName:(id)arg1;

@end
