/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSSQLCore, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSSQLAdapter : XXUnknownSuperclass {
@private
	NSMutableArray* _connections;
	NSSQLCore* _sqlCore;
}
-(id)initWithSQLCore:(id)sqlcore;
-(id)_newSelectStatementWithFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance;
-(id)_originalRowForUpdate:(id)update;
-(id)connections;
-(id)createConnection;
-(void)dealloc;
-(Class)generatorClass;
-(BOOL)hasOpenConnections;
-(id)newCopyAndInsertStatementForManyToMany:(id)many toManyToMany:(id)many2 intermediateTableName:(id)name invertColumns:(BOOL)columns;
-(id)newCountStatementWithFetchRequest:(id)fetchRequest;
-(id)newCreateIndexStatementForColumn:(id)column;
-(id)newCreateIndexStatementForColumnWithName:(id)name inTableWithName:(id)name2;
-(id)newCreateIndexStatementForColumns:(id)columns;
-(id)newCreatePrimaryKeyTableStatement;
-(id)newCreateTableStatementForEntity:(id)entity;
-(id)newCreateTableStatementForManyToMany:(id)many;
-(id)newDeleteStatementWithCorrelation:(id)correlation;
-(id)newDeleteStatementWithRow:(id)row;
-(id)newDropTableStatementForTableNamed:(id)tableNamed;
-(id)newGeneratorWithStatement:(id)statement;
-(id)newInsertStatementWithCorrelation:(id)correlation;
-(id)newInsertStatementWithRow:(id)row;
-(id)newPrimaryKeyInitializeStatementForEntity:(id)entity withInitialMaxPK:(long long)initialMaxPK;
-(id)newRenameTableStatementFrom:(id)from to:(id)to;
-(id)newRenameTableStatementFromManyToMany:(id)many toManyToMany:(id)many2 orToRandomSpot:(id)randomSpot;
-(id)newSQLStringForResettingPrimaryKeMaxWithEntities:(id)entities;
-(id)newSelectStatementWithFetchRequest:(id)fetchRequest;
-(id)newStatementWithEntity:(id)entity;
-(id)newStatementWithSQLString:(id)sqlstring;
-(id)newStatementWithoutEntity;
-(id)newUpdateStatementWithCorrelation:(id)correlation;
-(id)newUpdateStatementWithRow:(id)row;
-(void)registerConnection:(id)connection;
-(id)sqlCore;
-(unsigned)sqlTypeForExpressionConstantValue:(id)expressionConstantValue;
-(Class)statementClass;
-(BOOL)supportsCorrelatedSubqueries;
-(id)type;
-(id)typeStringForColumn:(id)column;
-(id)typeStringForSQLType:(unsigned)sqltype;
-(void)unregisterConnection:(id)connection;
-(id)url;
@end

