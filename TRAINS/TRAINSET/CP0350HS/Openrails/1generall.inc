
Comment ( *** General *** )
	Type ( Engine )
	Size  ( 3.06m 4.21m 11.336m )

Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Bar )
		Spring (
			Stiffness ( 1e1N/m 1e6N/m )
			Damping ( 1e7N/m/s 1e7N/m/s )
			Break ( 1200kN 1200kN )
			r0 ( 0m 0.04m )
		)
		CouplingHasRigidConnection ()
		Velocity (0.1m/s)
		CouplingUniqueType (CP350)
	)

        Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 1e6N/m 2e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 1200kN 1200kN )
			r0 ( 20cm 40cm )
		)
	)
	Buffers (
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1.3e6N/m/s 3.8e6N/m/s )
			r0 ( 0m 1e9 )
		)
		Centre ( 0.5m )
		Radius ( 1m )
		Angle ( 0.5deg )
	)

