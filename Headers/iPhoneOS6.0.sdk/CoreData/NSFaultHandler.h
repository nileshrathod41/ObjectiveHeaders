/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSFaultHandler : XXUnknownSuperclass {
}
+(BOOL)accessInstanceVariablesDirectly;
+(void)initialize;
-(id)initWithPersistenceStore:(id)persistenceStore;
-(void)_fireFirstAndSecondLevelFaultsForObject:(id)object withContext:(id)context;
-(void)fulfillFault:(id)fault withContext:(id)context;
-(id)fulfillFault:(id)fault withContext:(id)context error:(id*)error;
-(id)fulfillFault:(id)fault withContext:(id)context forIndex:(unsigned)index;
-(id)retainedFulfillAggregateFaultForObject:(id)object andRelationship:(id)relationship withContext:(id)context;
-(void)turnObject:(id)object intoFaultWithContext:(id)context;
@end

